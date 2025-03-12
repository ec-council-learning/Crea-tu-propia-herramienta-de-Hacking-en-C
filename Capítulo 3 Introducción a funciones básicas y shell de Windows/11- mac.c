#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void mac(void); /* Obtener mac */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void mac(void){
	system("getmac /v > logs/mac.log");
	printf("Se ha creado el archivo mac.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	mac();
	pause();
	return 0;
}
