/*
Escreva uma função em C que receba como parâmetros os coeficientes ​ a ​ , ​ b e ​ c que
definem uma equação no formato ​ a ​ x 2 ​ + ​ b ​ x + ​ c ​ , com ​ a ≠ 0. A função deverá retornar 0
se a equação não possuir raízes reais (Δ < 0), 1 se houver uma única raiz (Δ = 0), ou 2
se houverem duas raízes reais (Δ > 0). Nos casos em que houver raiz(es) real(is),
esta(s) deverá(ão) ser retornadas como parâmetros, conforme protótipo da função
descrito a seguir:
int raizes(int a, int b, int c, int *raiz1, int *raiz2);

@Jhonatas israel 
@Maciel Santos

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int raizes(float, float, float, float, float);

int raizes(float a, float b, float c, float *raiz1, float *raiz2){
	float delta=((b*b)-4*(a)*(c));
	if(delta<0){
		return 0;
	}else if ((delta=0)){
		return 1;
	}else{
		*raiz1=(((-1)*b)-sqrt(delta))/2*a;
		*raiz2=(((-1)*b)+sqrt(delta))/2*a;
		return 2;
	}
	return 0;
}

/* Escreva um programa em C que solicite ao usuário que digite os coeficientes de uma
 * de equação do 2° grau e utilize a função do item anterior para calcular as raízes, 
 * caso  seja possível. O programa deverá validar se realmete trata-se de uma equação do 2° grau
 * ( a!= 0 ) e deverá exibir corretamente a solução utilizando-se do valor de retorno para definir
 * o que será exibido.
 *
 * @Jhonatas israel 
 * @Maciel Santos */

int main ( void ){
	float a, b, c;//*raiz1, *raiz2;
	printf ("\n\t\tDigite os coeficientes de uma de equacao do SEGUNDO grau.\n");
	printf ("\nDigite seu coeficiente 'A':\t");
	scanf ("%f", &a);
	
	while (a == 0 ){
		printf ("\nA equacao nao podera receber valor 'A' igual a ZERO.");
		printf ("\nDigite seu coeficiente 'A', DIFERENTE DE ZERO!:\t");
		scanf ("%f", &a);
	}
	
	printf ("Digite seu coeficiente 'B':\t");
	scanf ("%f", &b);
	
	printf ("Digite seu coeficiente 'C':\t");
	scanf ("%f", &c);
	return 0;
}
