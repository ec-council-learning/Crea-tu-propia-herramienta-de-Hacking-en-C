#include<stdio.h>
#include<stdlib.h>

void pause(void);
void cleanc(void);
void sys_info(void);

void pause(){
	printf("\n\nPresiona una tecla para continuar...");
	getchar();
}

void cleanc(){
	system("cls");
}

void sysinfo(){
	cleanc();
	system("systeminfo > logs/sys_info.log");
	printf("[+] Se ha generado el archivo sys_info.log dentro de la carpeta logs");
}


int main(){
	mkdir("logs");
	sysinfo();
	pause();
	return 0;
}
