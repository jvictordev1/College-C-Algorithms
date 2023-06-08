#include<stdio.h>
#include<stdlib.h>

typedef int info;
typedef struct elemento *ponteiro;
typedef struct elemento{
	info n;
	ponteiro ant;
	ponteiro prox;
}elemento;
ponteiro ini;
ponteiro fim;

void listavazia(ponteiro *inicio,ponteiro *fim);
void inserirPele(ponteiro *inicio, int x);
void inserirIlist(ponteiro *inicio,int x,ponteiro *final);
void inserirFlist(ponteiro *final,int x);
void removerele(ponteiro *inicio,int x,ponteiro *final);
void imprimirlist(ponteiro *inicio);

int main(){
	listavazia(&ini,&fim);
	inserirPele(&ini,7);
	inserirIlist(&ini,9,&fim);
	inserirFlist(&fim,3);
	inserirFlist(&fim,8);
	//removerele(&ini,7,&fim);
	//removerele(&ini,9,&fim);
	//removerele(&ini,8,&fim);
	
	imprimirlist(&ini);
	return(0);
}

void listavazia(ponteiro *inicio,ponteiro *fim){
	*inicio=*fim=NULL;
}
void inserirPele(ponteiro *inicio, int x){
	*inicio=(elemento*)malloc(sizeof(elemento));
	(*inicio)->n=x;
	(*inicio)->ant=NULL;
	(*inicio)->prox=NULL;
	fim=(*inicio);
}
void inserirIlist(ponteiro *inicio,int x,ponteiro *final){
	ponteiro aux;
	aux=(elemento*)malloc(sizeof(elemento));
	aux->n=x;
	if((*final)==(*inicio)){
		aux->prox=(*final)=(*inicio);
		(*final)->ant=aux;
		(*final)->prox=NULL;
	}
	else{
		aux->prox=(*inicio);
	}
	aux->ant=NULL;
	(*inicio)=aux;
}
void inserirFlist(ponteiro *final,int x){
	ponteiro aux=(elemento*)malloc(sizeof(elemento));
	aux->n=x;
	aux->prox=NULL;
	aux->ant=(*final);
	(*final)->prox=aux;
	*final=aux;
}
void removerele(ponteiro *inicio,int x,ponteiro *final){
	ponteiro aux,temp;
	aux=*inicio;
	while(aux!=NULL){
		if(aux->n==x){
			if(aux->ant==NULL){
				(*inicio)=temp=aux->prox;
				temp->ant=NULL;
			}
			else{
				if(aux->prox==NULL){
					(*final)=temp=aux->ant;
					temp->prox=NULL;
				}
				else{
					temp=aux->ant;
					temp->prox=aux->prox;
					temp=aux->prox;
					temp->ant=aux->ant;
				}
			}
			free(aux);
			break;
		}
		else{
			aux=aux->prox;
			continue;
		}
	}
}
void imprimirlist(ponteiro *inicio){
	ponteiro aux;
	aux=*inicio;
	if(aux->prox==NULL){
		printf("Lista: %d\n",aux->n);
	}
	else{
		printf("Lista : %d ",aux->n);
		aux=aux->prox;
		while(aux!=NULL){
			printf("%d ",aux->n);
			aux=aux->prox;
		}
	}
}
