#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheMatriz(int m[3][3]);
void exibeMatriz(int m[3][3]);
void somaMatrizes(int a[3][3], int b[3][3], int c[3][3]);

int main(void){
	int a[3][3], b[3][3], c[3][3];
	printf("Programa matrizes\n");
	printf("Matriz A\n");
	preencheMatriz(a);
	exibeMatriz(a);
	printf("\nMatriz B\n");
	preencheMatriz(b);
	exibeMatriz(b);
	printf("\nMatriz C\n");
	somaMatrizes(a,b,c);
	
	return 0;
}

void preencheMatriz(int m[3][3]){
	for (int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			m[i][j]=rand()%10;
		}
	}
}

void exibeMatriz(int m[3][3]){
	for (int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%2d \t", m[i][j]);
		}
		printf("\n");
	}
}

void somaMatrizes(int a[3][3], int b[3][3], int c[3][3]) {
	for (int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			c[i][j]=(a[i][j])+(b[i][j]);
			printf("%2d \t", c[i][j]);
		}
		printf("\n");
	}
}
