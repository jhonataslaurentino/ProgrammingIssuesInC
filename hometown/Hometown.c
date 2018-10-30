#include <stdio.h>

int main (void){
	char cidade[51];
	printf("Informe a cidade onde você nasceu: ");
	scanf(" %50[^\n]", cidade);
	printf("Você é natural de: %s\n",cidade);
	return 0;
}

 
