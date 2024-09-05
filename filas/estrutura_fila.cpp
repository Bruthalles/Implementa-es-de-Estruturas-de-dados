#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 10

typedef struct{
	
	//variavel retaguarda e frente
	int R,F;
	int vet[tam];
	
}filavet;

void enfileirar (int valor, filavet *p){
	
	if (p->R == tam-1){
		printf("fila cheia!");
		exit(0);
	}
	
	p->R++;
	p->vet[p->R]= valor;
}

int desenfileirar (filavet *p){
	
	int aux;
	
	if(p->F == tam){
		
		printf("fila vazia!");
		exit(1);	
	}
	
	aux = p->vet[p->F];
	p->F++;
	return aux;
	
}

int main(){
	filavet fila;
	int valor;
	fila.R = -1;
	fila.F = 0;
	
	for (int i=0; i<tam;i++){
		printf("digite o valor a ser enfileirado: \n");
		scanf("%d",&valor);
		enfileirar(valor, &fila);
	}
	
	for (int i=0; i<tam;i++){
		printf("\n %d",desenfileirar(&fila));
	}
	
	return(0);
}