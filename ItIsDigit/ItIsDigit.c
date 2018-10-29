#include <stdio.h>

int ehDigito(char);

int main(void) {
  char c;
  printf("Informe um caractere: ");
  scanf("%c", &c);
  printf("Caractere Lido: %c\n", c);
  printf("Código ASCII: %d\n", c);
  if (ehDigito(c)) {
    printf("%c é um digito \n", c);
  }
  else {
    printf("%c não é um digito \n", c);
  }
  return 0;
}


int ehDigito(char c) {
  if (c>='0' && c<='9') {
    return 1;
  }
  else {
    return 0;
  }
}



