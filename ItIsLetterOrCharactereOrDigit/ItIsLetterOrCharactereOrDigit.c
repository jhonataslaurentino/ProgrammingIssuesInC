#include <stdio.h>

int ehDigito(char);
int ehLetra(char);
int ehCaracter(char);


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
    if (ehLetra(c)) {
		printf("%c é uma letra \n", c);
	} else{
			printf("%c é um caracter especial \n", c);
		  }
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



