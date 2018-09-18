#include <stdio.h>
void somaProd(int, int);

int soma, prod;
int main(void){
	int x,y;
	printf("Valor de X:");
	scanf("%d", &x);
	printf("Valor de X:");
	scanf("%d", &y);
	somaProd(x, y);
	printf("x+y= %d \t x*y=%d",soma, prod);
	return 0;
}

void somaProd(int a, int b){
	soma=a+b;
	prod=a*b;
}
