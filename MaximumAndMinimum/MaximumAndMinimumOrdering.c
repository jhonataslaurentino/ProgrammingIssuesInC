#include <stdio.h>

void preenche(int n, int *v);
void exibe(int n, int *v);
int minimoINT(int n, int *v);
int minimoREC(int n, int *v);
int maximoINT(int n, int *v); 
int maximoREC(int n, int *v); 
void bubbleSort(int n, int *vet);

int main(void) {
	int k, maxINT,maxREC, minINT,minREC;
	printf("Máximo elemento em um vetor\n");
	printf("Qual o número de elementos? ");
	scanf("%d", &k);
	int v[k];
	preenche(k, v);
	exibe(k, v);
	minINT = minimoINT(k, v);
	minREC = minimoREC(k, v);

	maxINT = maximoINT(k, v);
	maxREC = maximoREC(k, v);
	
	printf("Menor elemento do vetor INTERATIVO: %d \n", minINT);
	printf("Menor elemento do vetor RECURSIVO: %d \n", minREC);

	printf("Maior elemento do vetor INTERATIVO: %d \n", maxINT);
	printf("Maior elemento do vetor RECURSIVO: %d \n", maxREC);

	
	bubbleSort(k, v);
	exibe(k, v);
	return 0;
}

void preenche(int n, int *v) {
	printf("Entre com os elementos do vetor: \n");
	for (int i=0; i<n; i++) {
		printf("v(%d): ", i+1);
		scanf("%d", &v[i]);
	}
}

void exibe(int n, int *v) {
printf("Vetor: \n");
  for (int i=0; i<n; i++) {
    printf("%d\t", v[i]);
  }
  printf("\n");
}

int minimoINT(int n, int *v) {
	//minimo interativo
	int menor;
	menor = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] < menor) {
			menor = v[i];
		}
	}
	return menor;
}

int minimoREC(int n, int *v) {
	//minimo recursivo
	if (n == 1) {
		return v[0];
	}
	else {
		float min = minimoREC(n-1, &v[1]);
		return v[0] < min ? v[0] : min;
	}
}

int maximoINT(int n, int *v) {
	//maximo interativo
	int maior;
	maior = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] > maior) {
			maior = v[i];
		}
	}
	return maior;
}
int maximoREC(int n, int *v){
	//maximo interativo

	if (n == 1) {
		return v[0];
	}
	else {
		float max = maximoREC(n-1, &v[1]);
		return v[0] > max ? v[0] : max;
	}
}


void bubbleSort(int n, int *v) {
  int temp;
  for (int i = 0; i < n - 1; i++){
    for (int j = (i+1); j < n; j++){
      if (v[i] > v[j]){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}


