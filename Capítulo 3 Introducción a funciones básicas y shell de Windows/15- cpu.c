#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void cpu(void); /* Obtiene información del CPU */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void cpu(void){
	system("wmic cpu list full > logs/cpu.log");
	printf("[+] Se ha creado el archivo cpu.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	cpu();
	pause();
	return 0;
}
