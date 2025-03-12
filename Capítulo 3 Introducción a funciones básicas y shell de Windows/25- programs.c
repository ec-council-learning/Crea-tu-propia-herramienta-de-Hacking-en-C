#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void programs(void); /* Obtiene un listado de programas instalados en Windows */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void programs(void){
	system("winget list > logs/programs.log");
	printf("Se ha guardado el archivo programs.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	programs();
	pause();
	return 0;
}
