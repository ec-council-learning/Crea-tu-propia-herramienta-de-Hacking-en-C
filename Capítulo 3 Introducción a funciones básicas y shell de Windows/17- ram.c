#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void ram(void); /* Obtiene información de la memoria ram */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void ram(void){
	system("wmic memorychip list full > logs/ram.log");
	printf("[+] Se ha creado el archivo ram.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	ram();
	pause();
	return 0;
}
