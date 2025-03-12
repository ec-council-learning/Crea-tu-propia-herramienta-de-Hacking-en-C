#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void bios(void); /* Obtiene informacion de la BIOS */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void bios(void){
	system("wmic bios list full > logs/bios.log");
	printf("[+] Se ha creado el archivo bios.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	bios();
	pause();
	return 0;
}
