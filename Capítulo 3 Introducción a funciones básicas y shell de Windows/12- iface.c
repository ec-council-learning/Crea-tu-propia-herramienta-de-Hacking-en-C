#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void ifaceStatistics(void){
	system("netstat -e");
}


int main(){
	cleanc();
	ifaceStatistics();
	pause();
	
	return 0;
}
