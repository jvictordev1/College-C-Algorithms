#include<stdio.h>
#include<stdlib.h>

typedef int elemento;
typedef struct pilha *ponteiro;
typedef struct pilha{
	elemento x;
	ponteiro abaixo;
}pilha;
ponteiro topo;

void inicializapilha(ponteiro *topo);
void inserElPilha(ponteiro *topo,elemento x);
void verPilha();
void consultaTopo();
void retPilha(ponteiro *topo);

int main(){
	inicializapilha(&topo);
//	consultaTopo();
//	verPilha();
	inserElPilha(&topo,2);
	inserElPilha(&topo,3);
	inserElPilha(&topo,6);
	inserElPilha(&topo,8);
//	retPilha(&topo);
//	retPilha(&topo);
//	retPilha(&topo);
//	retPilha(&topo);
	consultaTopo();
//	verPilha();
	return(0);
}

void inicializapilha(ponteiro *topo){
	*topo=NULL;
}
void inserElPilha(ponteiro *topo,elemento x){
	ponteiro aux;
	aux=(pilha*)malloc(sizeof(pilha));
	if(*topo==NULL){
		aux->x=x;
		aux->abaixo=NULL;
		*topo=aux;
	}
	else{
		aux->x=x;
		aux->abaixo=*topo;
		*topo=aux;
	}
}
void verPilha(){;
	if(topo==NULL){
		printf("Vazia\n");
	}
	else{
		printf("Nao vazia\n");
	}
}
void consultaTopo(){
	if(topo){
		printf("Elemento no topo da pilha: %d\n",topo->x);
	}
	else{
		printf("Vazia\n");
	}
}
void retPilha(ponteiro *topo){
	ponteiro aux=*topo;
	if(aux){
		*topo=(*topo)->abaixo;
		free(aux);
	}
}
