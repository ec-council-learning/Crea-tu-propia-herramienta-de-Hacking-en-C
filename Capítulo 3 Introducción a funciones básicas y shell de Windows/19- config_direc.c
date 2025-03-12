#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void config_direc(void); /* Obtiene las configuraciones de las directivas del usuario de windows */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void config_direc(void){
	system("gpresult /z > logs/config_direc.log");
	printf("[+] Se ha creado el archivo config_direc.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	config_direc();
	pause();
	return 0;
}
