#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void routeTables(void); /* Obtener tabla de enrutamiento */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void routeTables(void){
	system("netstat /r > logs/routeTables.log");
	printf("[+] Se ha creado el archivo routeTables.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	routeTables();
	pause();
	return 0;
}
