#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void users(void); /* Obtiene los usuarios de Windows */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void users(void){
	system("net user > logs/users.log");
	printf("[+] Se ha creado el archivo users.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	users();
	pause();
	return 0;
}
