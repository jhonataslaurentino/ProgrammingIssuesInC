#include <stdio.h>

int main(void){
	int vetor[10];
	int t;
	
	
	printf("Criando um vetor em C\n");
	printf("Quantos valores quer digitar? (max. 10)\n");
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		printf("Informe o  elemento %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("vetor preenchimento\n");
	for (int i =0 ; i<t; i++){
		printf("%d\t", vetor[i]);
	}
	return 0;
}
