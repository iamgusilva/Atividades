#include <stdio.h> 
#include <stdbool.h> 
#include <locale.h>

bool ehprimo(int n){
	int i;
	
	for (i=2; (i<n) && (n%i != 0); i++);
	return (n>1 && i>=n);
	} 

int main(){
	int vet[10], j;
	
	setlocale(LC_ALL, "Portuguese");
	
	for (j=0; j<10; j++){
		printf("Digite um número: ", j);
		scanf("%d",&vet[j]);
	}
	
	for (j=0; j <10; j++)
	if (ehprimo(vet[j]))
	printf("\nVetor[%d] = %d é primo.\n", j, vet[j]);
	}
