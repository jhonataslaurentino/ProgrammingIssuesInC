#include <stdio.h>
void somaProd(int, int, int*, int*);

int main(void){
	int x,y,soma=0, prod=0;
	printf("Valor de X:");
	scanf("%d", &x);
	printf("Valor de X:");
	scanf("%d", &y);
	somaProd(x, y, &soma, &prod);
	printf("x+y= %d \t x*y=%d",soma, prod);
	return 0;
}

void somaProd(int a, int b, int *soma, int *prod){
	*soma=a+b;
	*prod=a*b;
}
