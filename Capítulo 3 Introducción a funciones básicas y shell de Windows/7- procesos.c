#include<stdio.h>
#include<stdlib.h>

void pause(void);
void cleanc(void);
void task(void);

void pause(){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(){
	system("cls"); //clear
}

void task(){
	cleanc();
	system("tasklist > logs/tasklist.log");
	system("color a");
	printf("[+] Se ha creado el archivo tasklist.log en la carpeta logs");
}

int main(){
	system("mkdir logs");
	task();
	
	pause();
	return 0;
}
