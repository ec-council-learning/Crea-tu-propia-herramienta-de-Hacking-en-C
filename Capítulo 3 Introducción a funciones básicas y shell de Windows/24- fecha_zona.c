#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void date(void); /* Obtiene la fecha de Windows */
void time_zone(void); /* Obtiene la zona horaria de Windows */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void date(void){
	system("date /t > logs/date.log");
	printf("[+] Se ha creado el archivo date.log dentro de la carpeta logs");
}

void time_zone(void){
	system("tzutil /g > logs/time_zone.log");
	printf("\n[+] Se ha creado el archivo time_zone.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	date();
	time_zone();
	pause();
	return 0;
}
