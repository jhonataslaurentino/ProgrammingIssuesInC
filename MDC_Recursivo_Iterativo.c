#include <stdio.h>
#include <time.h>

int mdc(int, int);
int mdcr(int, int);

int main(void){
	clock_t t1,t2;
	double tempo;
	t1= clock();
	int resp;
	int a = 12;
	int b = 18;
	
	t1 = clock();
	resp= mdc(a,b);
	t2 = clock();
	tempo = (double)(t2-t1)/ CLOCKS_PER_SEC;
	printf("MDC= %d\n",resp);
	printf("Tempo de execução versão iterativa: %f\n",tempo);
	printf("\n");
	t1 = clock();
	resp= mdcr(a,b);
	t2 = clock();
	tempo = (double)(t2-t1)/ CLOCKS_PER_SEC;
	printf("MDCR= %d\n",resp);
	printf("Tempo de execução versão recursiva: %f\n",tempo);
	printf("\n");
	return 0;
}

int mdc(int a, int b){
	int r;
	r= a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int mdcr(int a, int b){
	if(b==0){
		return a;
	}else{
		return mdcr(b, a%b);
	}
}
	
	
