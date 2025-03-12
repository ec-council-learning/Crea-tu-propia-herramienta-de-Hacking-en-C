#include<stdio.h>
#include<stdlib.h>

void pause(void);
void cleanc(void);
void whoami(void);

void pause(){
	printf("\n\nPresiona una tecla para continuar...");
	getchar();
}

void cleanc(){
	system("cls");
}

void whoami(){
	cleanc();
	system("whoami > logs/whoami.log");
	printf("[+] Se ha creado el archivos whoami.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	whoami();
	
	pause();
}
