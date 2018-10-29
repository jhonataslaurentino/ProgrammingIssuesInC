#include <stdio.h>

int main(void){
	char letra;
	
	letra='s';
	printf("Letra: %c - Codigo ACII: %d\n", letra, letra);
	letra=86;
	printf("Letra: %c - Codigo ACII: %d\n", letra, letra);
	letra++;
	printf("Letra: %c - Codigo ACII: %d\n", letra, letra);
	return 0;
}

