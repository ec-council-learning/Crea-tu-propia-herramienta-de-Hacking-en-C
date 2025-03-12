#include<stdio.h>
#include<stdlib.h>

void pause(void);
void cleanc(void);
void ip_config_all(void);

void pause(){
	printf("\n\nPresione una tecla para continuar...");
	getchar();
}

void cleanc(){
	system("cls");
}

void ip_config_all(){
	cleanc();
	system("ipconfig /allcompartments /all");
}

int main(){
	//system("mkdir logs");
	ip_config_all();
	
	pause();
	return 0;
}
