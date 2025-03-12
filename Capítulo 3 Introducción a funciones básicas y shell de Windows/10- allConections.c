#include<stdio.h>
#include<stdlib.h>

void pause();
void cleanc();
void allConections();

void pause(){
	printf("Presione una tecla para continuar...");
	getchar();
}

void cleanc(){
	system("cls");
}

void allConections(){
	cleanc();
	system("netstat -q > logs/allConections.log");
}

int main(){
	system("mkdir logs");
	allConections();
	pause();
	return 0;
}
