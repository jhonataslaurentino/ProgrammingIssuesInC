#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOTAL 167

static char* lelinha(void);
char* duplica(char*);
int cadastraMunicipios(char**);
void liberaMunicipios(int, char**);
void imprimeMunicipios(int, char**);

int main(void) {
  char* municipios [TOTAL];
  int quant;
  printf("Cadastro de Municípios do RN\n");
  quant = cadastraMunicipios(municipios);
  imprimeMunicipios(quant, municipios);
  liberaMunicipios(quant, municipios);
  return 0;
}

static char* lelinha(void) {
  char linha[255];
  scanf(" %26[^\n]", linha);
  return duplica(linha);
}

char* duplica(char* s) {
  int n = strlen(s) + 1;
  char* d = (char*) malloc(n*sizeof(char));
  strcpy(d, s);
  return d;
}

void liberaMunicipios(int n, char** lista) {
  for (int i=0; i<n; i++) {
    free(lista[i]);
  }
}

void imprimeMunicipios(int n, char** lista) {
  printf("\nMunicípios do RN\n");
  for (int i=0; i<n; i++) {
    printf("Município %d: %s\n", i+1, lista[i]);
  }
  printf("\n");
}

int cadastraMunicipios(char** lista) {
  int n;
  printf("Quantos municípios deseja cadastrar? ");
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    printf("Informe o município %d: ", i+1);
    lista[i] = lelinha();
  }
  return n;
}
