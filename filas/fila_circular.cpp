#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define tam 10
// programa de fila circular

typedef struct {
	
	int f , r , q;
	int vet[tam];
	
}filacircular;

void enfileirar (int valor, filacircular *p){
	
	if(p->q == tam+1){
		printf("fila cheia");
		exit(0);
	}
	
	if(p->r == tam-1){
		p->r = 0;
	}
	
	else{
		p-> r++;
	}
	
	p->vet[p->r]= valor;
	p-> q++;
}

int desenfileirar(filacircular *p){
	
	int aux;
	if(p->q == 0){
		printf("fila vazia");
		exit(1);
	}
	
	aux = p->vet[p->f];
	if(p->f == tam-1){
		p->f =0;
	}
	
	else{
		p->f++;
	}
	
	p->q--;
	return aux;
}

int main (void){
	filacircular fila;
	int valor;
	fila.r =-1;
	fila.f =0;
	fila.q =0;
	
	for(int i=0; i<tam; i++){
	
		printf("digite o valor para enfileirar: ");
		scanf("%d",&valor);
		enfileirar (valor,&fila);
	}
	
	for (int i=0;i<tam;i++){
		printf("  %d",desenfileirar(&fila));
	
	}
	system("pause");
}








