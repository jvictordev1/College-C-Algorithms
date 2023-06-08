#include<stdio.h>
#include<stdlib.h>

typedef int key;

typedef struct{
	key chave;
}registro;

typedef struct elemento *ponteiro;

typedef struct elemento{
	registro num;
	ponteiro prox;
}elemento;

typedef struct{
	ponteiro topo;
}pilha;

pilha l;

void inicializarpilha(pilha *p);
void empilha(pilha *p, key x);
int quantpilha(pilha p);
void desempilha(pilha *p);
void consultapilha(pilha *p);

int main(){
	inicializarpilha(&l);
	empilha(&l,5);
	empilha(&l,7);
	empilha(&l,8);
	empilha(&l,15);
	consultapilha(&l);
	printf("Elementos totais: %d\n\n",quantpilha(l));
	desempilha(&l);
	consultapilha(&l);
	printf("Elementos totais: %d\n",quantpilha(l));
}
void inicializarpilha(pilha *p){
	p->topo=NULL;
}
int pilhavazia(pilha p){
	ponteiro aux=p.topo;
	if(!aux){
		return(0);
	}
	else{
		return(1);
	}
}
void empilha(pilha *p, key x){
	ponteiro aux=p->topo;
	registro a;
	a.chave=x;
	
	if(!aux){
		aux=(elemento*)malloc(sizeof(elemento));
		aux->num=a;
		aux->prox=NULL;
		p->topo=aux;
	}
	else{
		aux=(elemento*)malloc(sizeof(elemento));
		aux->num=a;
		aux->prox=p->topo;
		p->topo=aux;
	}
}
int quantpilha(pilha p){
	ponteiro aux=p.topo;
	int i;
	for(i=0;aux!=NULL;i++){
		aux=aux->prox;
	}
	return(i);
}
void desempilha(pilha *p){
	ponteiro aux=p->topo;
	if(!aux){
		printf("Lista vazia!\n");
	}
	else{
		if(!aux->prox){
			aux=NULL;
			free(p->topo);
			p->topo=aux;
			printf("Lista esvaziada!\n");
		}
		else{
			aux=aux->prox;
			free(p->topo);
			p->topo=aux;
			printf("Elemento removido!\n");
		}
	}
}
void consultapilha(pilha *p){
	ponteiro aux=p->topo;
	if(!aux){
		printf("Lista vazia!\n");
	}
	else{
		printf("Lista:");
		while(aux){
			printf(" %d",aux->num);
			aux=aux->prox;
		}
		printf(".\n");
	}
}
