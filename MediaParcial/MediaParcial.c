/*Escreva uma função em C que receba as notas das três avaliações de um aluno da UFRN e
retorne a sua média parcial.*/
#include <stdio.h>
#include <stdlib.h>

float mediaParcial(float,float, float);

int main(void){
	float nota1, nota2, nota3;
	
	do {
		printf("Digite o valor da nota 1: ");
		scanf("%f",&nota1);
	} while (nota1 >= 0 && nota1<=10);
	
	do {
		printf("Digite o valor da nota 2: ");
		scanf("%f",&nota2);
	} while (nota2 >= 0 && nota2<=10);
	
	do {
		printf("Digite o valor da nota 3: ");
	scanf("%f",&nota3);
	} while (nota3 >= 0 && nota3<=10);
	
	

	printf("%.2f",mediaParcial(nota1, nota2, nota3));
	return 0;
}

float mediaParcial(float nota1, float nota2, float nota3){
	float soma= nota1+ nota2 + nota3;
	return (soma/3);
}
