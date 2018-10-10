#include <stdio.h>
#include <stdlib.h>
void preencheMatriz(int, int, int**);
void exibeMatriz(int**);

int** transposta(int, int, int**, int**);
int** somaMatriz(int, int, int**, int**);
int** subtracaoMatriz(int, int, int**, int**);
int** multEscalar(int, int, int**, int**);
int** mult(int, int, int**, int**);

int main(void) {
  int m, n, **mat, **trp;
  printf("Informe tamanho da matriz: \n");
  printf("Linhas: ");
  scanf("%d", &m);  
  printf("Colunas: ");
  scanf("%d", &n);
  mat = (int**) malloc(m*sizeof(int*));
  for (int k=0; k<m; k++) {
    mat[k] = (int*) malloc(n*sizeof(int));
  }
  printf("\nInforme os elementos da matriz\n");
  preencheMatriz(m, n, mat);
  printf("\nMatriz Lida\n");
  exibeMatriz(m, n, mat);
  trp = transposta(m, n, mat);
  printf("\nMatriz Transposta\n");
  exibeMatriz(n, m, trp);
  for (int k=0; k<m; k++) {
    free(mat[k]);
  }
  free(mat);
  for (int k=0; k<n; k++) {
    free(trp[k]);
  }
  free(trp);
  return 0;
}
void preencheMatriz(int **mat) {
  for (int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			mat[i][j]=rand()%10;
		}
	}
}
void exibeMatriz(int m, int n, int **mat) {
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("%3d", mat[i][j]);
    }
    printf("\n");
  }
}
int** transposta(int m, int n, int** mat) {
  int** trp = (int**) malloc(n*sizeof(int*));
  for (int i=0; i<n; i++) {
    trp[i] = (int*) malloc(m*sizeof(int));
  }
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      trp[i][j] = mat[j][i];
    }
  }
  return trp;
}

int** somaMatriz(int, int, int**, int**){
}
int** subtracaoMatriz(int, int, int**, int**){
}
int** multEscalar(int, int, int**, int**){
}
int** mult(int, int, int**, int**){
}

int main(void){
	int a[3][3], b[3][3], c[3][3];
	printf("Programa matrizes\n");
	printf("Matriz A\n");
	preencheMatriz(a);
	exibeMatriz(a);
	printf("\nMatriz B\n");
	preencheMatriz(b);
	exibeMatriz(b);
	printf("\n Soma das Matrizes \n");
	somaMatrizes(a,b,c);
	printf("\n Matriz simétrica \n");
	simetrica(c);
	
	return 0;
}

void preencheMatriz(int m[3][3]){
	
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

int simetrica(int c[3][3]){
	for (int i=0;i<3; i++){
		for (int j=0;j<3; j++){
			if(c[i][j]!=c[j][i]){
				return 0;
			}
		}
	}
	return 1;
}
