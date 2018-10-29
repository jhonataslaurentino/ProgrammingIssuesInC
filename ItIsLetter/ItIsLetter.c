#include <stdio.h>

int ehLetra(char);

int main(void) {
  char letra;
  printf("Informe um caractere: ");
  scanf("%c", &letra);
  printf("Caractere Lido: %c\n", letra);
  printf("Código ASCII: %d\n", letra);
  if (ehLetra(letra)) {
    printf("%c é uma letra\n", letra);
  }
  else {
    printf("%c não é uma letra\n", letra);
  }
  return 0;
}


int ehLetra(char c) {
  if (c>='A' && c<='Z') {
    return 1;
  }
  else if (c>='a' && c<='z') {
    return 1;
  }
  else {
    return 0;
  }
}



