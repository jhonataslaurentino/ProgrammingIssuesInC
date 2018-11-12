#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  FILE* fp;
  char moto[20];
  char* motos[] = {"Yamaha", "BMW", "Kawasaki", "Honda", "Suzuki", "Ducati"};
  fp = fopen("motos.txt", "wt");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar esse programa...\n");
    exit(1); 
  }
  printf("Gravando dados no arquivo\n");
  i = 0;
  while (i < 6) {
    printf("%d... ok!\n", i+1);
    fprintf(fp, "%s\n", motos[i]);
    i += 1;
  }
  fclose(fp);
  printf("Dados gravados com sucesso!\n");
  printf("\n\n");

  printf("Recuperando dados do arquivo\n");
  fp = fopen("motos.txt", "rt");
  if (fp == NULL) {
    printf("Erro na abertura do arquivo!\n");
    printf("Não é possível continuar esse programa...\n");
    exit(1); 
  }
  i = 0;
  while (fscanf(fp, "%s\n", moto) != EOF) {
    printf("%d. %s\n", i+1, moto);
    i += 1;
  }


  return 0;
}
