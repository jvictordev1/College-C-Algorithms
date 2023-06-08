#include<stdio.h>
#include<stdlib.h>

typedef int info;
typedef struct lista *ponteiro;
typedef struct lista{
	info x;
	ponteiro prox;
}lista;
ponteiro p;
ponteiro l; //ponteiro que aponta para o inicio//

int tamanho_lista(ponteiro *ini){
	int tam;
	ponteiro aux=*ini;
	for(tam=0;aux!=NULL;tam++){
		aux=aux->prox;
	}
	return tam;
}

void criar_lista_vazia(ponteiro *ini){
	*ini=NULL;
}
void inserir_prim_elem(ponteiro *ini,info v){
	*ini=(ponteiro)malloc(sizeof(lista));
	(*ini)->x=v;
	(*ini)->prox=NULL;
}
void inserir_inicio_lista(ponteiro *ini,info v){
	ponteiro aux=*ini;
	if(!aux){
		*ini=(ponteiro)malloc(sizeof(lista));
		(*ini)->x=v;
		(*ini)->prox=NULL;
	}
	else{
		ponteiro elem=(ponteiro)malloc(sizeof(lista));
		elem->x=v;
		elem->prox=(*ini);
		(*ini)=elem;
	}
}
ponteiro acessar_ult_elem(ponteiro *ini){
	ponteiro aux=(*ini)->prox;
	while(aux){
		if(!aux->prox){
			return aux;
		}
		else{
			aux=aux->prox;
		}
	}
}
void inserir_elem_p1(ponteiro *ini,info v,int p){
	int contador,tam;
	ponteiro pos=*ini;
	ponteiro aux=pos;
	tam=tamanho_lista(&l);
	if(tam+1<p+1){
		printf("Nao e possivel concluir esta operacao\n");
	}
	else{
		for(contador=0;contador<p;contador++){
			if(pos->prox==NULL){
				break;
			}
			else{
				pos=pos->prox;
			}
		}
		//printf("%d\n",pos->x);
		if(!pos->prox){
			pos->prox=(ponteiro)malloc(sizeof(lista));
			pos->prox->x=v;
			pos->prox->prox=NULL;
		}
		else{
			ponteiro elem=(ponteiro)malloc(sizeof(lista));
			elem->prox=pos->prox;
			elem->x=v;
			pos->prox=elem;
		}
	}
	//printf("%d\n",pos->x);
}
void insere_elem_ant_p(ponteiro *ini,info v,int p){
	ponteiro pos=*ini;
	ponteiro elem;
	int contador,tam;
	for(contador=0;contador<p-1;contador++){
		if(pos->prox==NULL){
			break;
		}
		else{
			pos=pos->prox;
		}
	}
	elem=(ponteiro)malloc(sizeof(lista));
	elem->prox=pos->prox;
	elem->x=v;
	pos->prox=elem;
}
void elim_suc_p(ponteiro *ini,int p){
	ponteiro pos=*ini;
	int contador;
	for(contador=0;contador<p;contador++){
		if(pos->prox==NULL){
			break;
		}
		else{
			pos=pos->prox;
		}
	}
	if(!pos->prox){
		printf("Nao existem elementos a serem apagados\n");
	}
	else{
		ponteiro aux=pos->prox;
		pos->prox=pos->prox->prox;
		free(aux);
	}
}
int main(){
	criar_lista_vazia(&l);
	inserir_prim_elem(&l,3);
	inserir_inicio_lista(&l,5);
	inserir_elem_p1(&l,7,2);
	inserir_elem_p1(&l,9,3);
	inserir_elem_p1(&l,100,1);
	insere_elem_ant_p(&l,10,4);
	elim_suc_p(&l,4);
	ponteiro a=l;
	for(;a!=NULL;a=a->prox){
		printf("%d\n",a->x);
	}
}
