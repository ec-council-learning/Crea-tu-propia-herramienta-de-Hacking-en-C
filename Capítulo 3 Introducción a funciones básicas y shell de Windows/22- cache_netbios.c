#include<stdio.h>
#include<stdlib.h>

void pause(void); /* Pausa para que no se cierre el programa */
void cleanc(void); /* Limpia pantalla */
void nbt_cache(void); /* Obtiene el cache de nombres NetBIOS */

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void nbt_cache(void){
	system("nbtstat -c > logs/nbt_cache.log");
	printf("[+] Se ha creado el archivo nbt_cache.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	cleanc();
	nbt_cache();
	pause();
	return 0;
}
