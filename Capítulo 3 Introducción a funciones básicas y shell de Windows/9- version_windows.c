#include<stdio.h>
#include<stdlib.h>

void pause(void);
void cleanc(void);
void version_windows(void);

void pause(void){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(void){
	system("cls");
}

void version_windows(void){
	cleanc();
	system("ver > logs/versionWin.log");
	printf("[+] Se ha creado el archivo versionWin.log dentro de la carpeta logs");
}

int main(){
	system("mkdir logs");
	version_windows();
	pause();
	return 0;
}
