#include<stdio.h>
#include<stdlib.h>
typedef int elemento;
typedef struct esqueleto *ponteiro;
typedef struct esqueleto{
	elemento x;
	ponteiro prox;
}esqueleto;
ponteiro ini;
ponteiro fim;

void listavazia(ponteiro *inicio,ponteiro *fim);
void inserirEle(ponteiro *inicio,elemento num,ponteiro *fim);
void removerEle(ponteiro *inicio,ponteiro *fim);
void percorrerList(ponteiro *inicio);

int main(){
	listavazia(&ini,&fim);
	inserirEle(&ini,3,&fim);
	inserirEle(&ini,4,&fim);
	inserirEle(&ini,5,&fim);
	inserirEle(&ini,8,&fim);
	removerEle(&ini,&fim);
	removerEle(&ini,&fim);
	removerEle(&ini,&fim);
	removerEle(&ini,&fim);
	percorrerList(&ini);
	return(0);
}
void listavazia(ponteiro *inicio,ponteiro *fim){
	*inicio=*fim=NULL;
}
void inserirEle(ponteiro *inicio,elemento num,ponteiro *fim){
	ponteiro aux=(esqueleto*)malloc(sizeof(elemento));
	aux->x=num;
	aux->prox=NULL;
	if(*inicio==NULL){
		*inicio=*fim=aux;
	}
	else{
		if((*inicio)->prox==NULL){
			*fim=(*inicio)->prox=aux;
		}
		else{
			*fim=(*fim)->prox=aux;
		}
	}
}
void removerEle(ponteiro *inicio,ponteiro *fim){
	ponteiro aux=*inicio;
	if(*inicio){
		if(*inicio!=*fim){
			*inicio=(*inicio)->prox;
			free(aux);
		}
		else{
			*inicio=aux->prox;
			free(aux);
			*fim=*inicio;
		}
	}
	else{
		printf("Operacao de remocao negada. ");
	}
}
void percorrerList(ponteiro *inicio){
	ponteiro aux=*inicio;
	if(aux){
		printf("%d ",aux->x);
		aux=aux->prox;
		while(aux!=NULL){
			printf("%d ",aux->x);
			aux=aux->prox;
		}
	}
	else{
		printf("Lista vazia!\n");
	}
}
