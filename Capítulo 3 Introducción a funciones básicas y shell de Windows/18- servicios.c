#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void services(void); /* Obtiene un listado de los servicios de windows */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void services(void){
	system("sc query > logs/services.log");
	printf("[+] Se ha creado el archivo services.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	services();
	pause();
	return 0;
}
