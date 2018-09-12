#include <stdio.h>
#include <time.h>

//int fiboI(int);
int fiboR(int);

int main(void){
	clock_t t1,t2;
	double tempo;
	t1= clock();
	int resp;
	int x = 30;
	
	/*t1 = clock();
	resp= fiboI(x);
	t2 = clock();
	tempo = (double)(t2-t1)/ CLOCKS_PER_SEC;
	printf("Fibonacci recursivo= %d\n",resp);
	printf("Tempo de execução versão recursiva: %f\n",tempo);
	printf("\n");*/
	
	t1 = clock();
	resp= fiboR(x);
	t2 = clock();
	tempo = (double)(t2-t1)/ CLOCKS_PER_SEC;
	printf("Fibonacci iterativa = %d\n",resp);
	printf("Tempo de execução versão iterativa: %f\n",tempo);
	printf("\n");
	return 0;
}

int fiboR(int x){
	if (x==1 || x==2){
	return 1;
	}else{
		return fiboR(x-1)+fiboR(x-2);
	}
}
 
