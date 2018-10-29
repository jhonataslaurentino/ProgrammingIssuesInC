#include <stdio.h>

char maiuscula(char c);
char minuscula(char c);


int main(void) {
  char letra=0;
  printf("Letra lida: %c\n");
  letra=maiuscula(letra);
  printf("Letra lida: %c\n");
  letra=minuscula(letra);
  printf("Letra lida: %c\n");
  return 0;
 }
 
 char maiuscula(char c){
	if (c>='a' && c<='z'){
		 c=c-'a'+'A';
	}
	return c;
}

char minuscula(char c){
	if (c>='A' && c<='Z'){
		 c=c-'A'+'a';
	}
	return c;
}
