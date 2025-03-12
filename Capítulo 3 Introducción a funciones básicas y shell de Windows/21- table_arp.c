#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void arp_table(void); /* Visualiza la tabla ARP */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void arp_table(void){
	system("arp -a > logs/arp_table.log");
	printf("[+] Se ha creado el archivo arp_table.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	arp_table();
	pause();
	return 0;
}
