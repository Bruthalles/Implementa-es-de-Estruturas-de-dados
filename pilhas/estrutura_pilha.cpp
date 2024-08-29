#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//definição de constante
#define tam 10 

//struct para pilha
typedef struct {
	int vetor[tam];
	int topo;
}pilhavet;

//função void não retorna valor
void empilha (int valor,pilhavet *p){
	if(p->topo == tam-1){
		printf("\nPilha Cheia!");
		exit(0);
	}
	p->topo++;
	p->vetor[p->topo]=valor;
}

int desempilha(pilhavet *p){
	
	//variavel auxiliar para receber o topo
	int aux;
	if(p->topo<0){
		printf("\nPilha Vazia!");
		exit (1);
	}
	
	aux = p->vetor[p->topo];
	p->topo--;
	return aux;
}

int main(void){
	pilhavet pilha;
	int valor;
	pilha.topo=-1;
	
	for (int i=0;i<tam;i++){
		printf("\n Digite o valor a ser empilhado: ");
		scanf("%d", &valor);
		empilha(valor,&pilha);
	}
	
	for (int i=0;i<tam;i++){
		printf("\n %d",desempilha(&pilha));
	}
	
	printf("\n");
	system("pause");
}