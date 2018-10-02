#include <stdio.h>
#include <math.h>

void preenche(int n, float *p);
void exibe(int n, float *p);
float avalia(int n, float *p, float x);
int igualdade(int n, float *p1, float *p2);
void soma(int n, float *p1, float *p2, float *p3);
void produto(int n, float *p1, float *p2, float *p3);
int derivada(int n, float *p, float *d);


int main(void) {
  int g;
  printf("Representação de Polinômios\n");
  printf("Qual o grau do polinômio? ");
  scanf("%d", &g);
  g++;
  float p[g];
  preenche(g, p);
  exibe(g, p);
  return 0;
}


void preenche(int n, float *p) {
  printf("Entre com os coeficientes do polinômio: \n");
  for (int i=0; i<n; i++) {
    printf("a(%d): ", i);
    scanf("%f", &p[i]);
  }
}


void exibe(int n, float *p) {
printf("Polinômio: \n");
  for (int i=n-1; i>0; i--) {
    printf("%.1f x^%d + ", p[i], i);
  }
  printf("%.1f\n", p[0]);
}


float avalia(int n, float *p, float x) {
  float y = 0.0f;
  for (int i=0; i<n; i++) {
    y = y + p[i] * pow(x, i);
  }
  return y;
}


int igualdade(int n, float *p1, float *p2) {
  for (int i=0; i<n; i++) {
    if (p1[i] != p2[i]) {
      return 0;
    }
  }
  return 1;
}

void soma(int n, float *p1, float *p2, float *p3) {
  for (int i=0; i<n; i++) {
    p3[i] = p1[i] + p2[i];
  }
}

void produto(int n, float *p1, float *p2, float *p3) {
  int m = 2*n - 1;
  for (int k=0; k<m; k++) {
    p3[k] = 0;
    for (int i=0; i<=k; i++){
      p3[k] = p3[k] + p1[i] * p2[k-i];
    }
  }
}

int derivada(int n, float *p, float *d) {
  for (int i=0; i<n-1; i++) {
    d[i] = (i+1)*p[i+1];
  }
  return 0;
}
