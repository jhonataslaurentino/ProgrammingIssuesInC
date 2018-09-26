#include <stdio.h>
#define N 1000

void leTemperaturas(int,  float*);
float calculaMedia (int, float*);
float calculaVariancia(int, float*, float);

int n;
float vetor[N], temp, med= 0.0f;

int main(void){
	printf("Quantos valores de temperatura vão ser inseridos (máx. 1000) ? ");
	scanf("%d", &n);
	
	if (n>N){
		printf("Valor excede o limite");
		return 1;
	}
	leTemperaturas(n,vetor); 
	
	for (int i =0 ; i<n; i++){
		printf("%.2f\t", vetor[i]);
	}
	calculaMedia(n, vetor);
	calculaVariancia(n, vetor, med);
}

	
void leTemperaturas(int n,  float *v){
	printf("Informe os valores coletados\n");
	for (int i = 0; i < n; i++){
		printf("Informe a temperatura %d ",i+1 );
		scanf("%f", &vetor[i]);
	}	
}

float calculaMedia (int n, float *v){
	for (int i= 0; i<n; i++){
		med+=vetor[i];	
	}
	med=med/n;
	printf("\nTemperatura média: %.2f°c", med); 
	return 0;
}

float calculaVariancia(int n, float *v, float m){
	float var= 0.0f;
	for(int i =0; i<n;i++){
		var+= (vetor[i] - med) * (vetor[i] - med);
	}
	var = var/n;
	printf("\nA variancia das temperaturas foi: %.2f°c", var); 
	return 0;
}
