#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void drivers(void); /* Obtencion de listado de drivers de la maquina local */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void drivers(void){
	system("driverquery >  logs/drivers.log");
	printf("[+] Se ha creado el archivo drivers.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	drivers();
	pause();
	return 0;
}
