/*4. Escreva uma função em C que receba dois números inteiros e retorne o maior entre eles.*/

#include <stdio.h>

int euSouMaior(int, int);

int main(void){
	int x,y;
	printf("Digite um valor: ");
	scanf("%d",&x);
	printf("Digite mais um valor: ");
	scanf("%d",&y);
	printf("%d",euSouMaior(x,y));
	return 0;
}

int euSouMaior(int x, int y){
	int maior = x>y?x:y;
	return maior;
}

