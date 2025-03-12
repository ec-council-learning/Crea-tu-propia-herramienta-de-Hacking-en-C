#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void cache_dns(void);

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void cache_dns(void){
	system("ipconfig /displaydns > logs/cache_dns.log");
	printf("[+] Se ha creado el archivo cache_dns.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	cache_dns();
	pause();
	return 0;
}
