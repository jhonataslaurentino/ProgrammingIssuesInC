/*Escreva uma função em C que receba um número inteiro como parâmetro e retorne 1 se o
número for par ou 0 se o número for ímpar.*/

#include <stdio.h>


int parOrImpar(int);

int main(void){
	int x;
	printf("Digite um valor para saber se é par ou se é impar: ");
	scanf("%d",&x);
	parOrImpar(x);
	printf("%d",parOrImpar(x));
	return 0;
}

int parOrImpar(int x){
	if (x%2==0){
		return 1;
	}else{
		return 0;
	}
}
