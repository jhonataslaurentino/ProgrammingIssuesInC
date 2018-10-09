#include <stdio.h>
#include <stdlib.h>
void preencheMatriz(int, int, int**);
void exibeMatriz(int, int, int**);
int main(void) {
  int m, n, **mat;
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
  for (int k=0; k<m; k++) {
    free(mat[k]);
  }
  free(mat);
  return 0;
}
void preencheMatriz(int m, int n, int **mat) {
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      printf("mat[%d][%d]: ", i+1, j+1);
      scanf("%d", &mat[i][j]);
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
