#include<stdio.h>
#include<stdlib.h>

typedef int chave;
typedef struct elemento* ponteiro;

typedef struct{
	ponteiro raiz;
}arv;
typedef struct elemento{
	chave x;
	ponteiro esq;
	ponteiro dir;
}elemento;
arv a;

void cria_arv(arv *a){
	a->raiz=NULL;
}
ponteiro insere_elem(ponteiro raiz,chave ind){
	if(raiz==NULL){
		raiz=(ponteiro)malloc(sizeof(elemento));
		raiz->x=ind;
		raiz->esq=raiz->dir=NULL;
	}
	else{
		if(ind<raiz->x){
			raiz->esq=insere_elem(raiz->esq,ind);
		}
		else{
			raiz->dir=insere_elem(raiz->dir,ind);
		}
		return raiz;
	}
}
void imprime(ponteiro raiz){
	if(raiz!=NULL){
		imprime(raiz->esq);
		printf("%d ",raiz->x);
		imprime(raiz->dir);
	}
}
ponteiro busca(ponteiro raiz,chave ind){
	if(raiz==NULL){
		return NULL;
	}
	else{
		if(raiz->x==ind){
			return raiz;
		}
		else{
			if(ind<raiz->x){
				busca(raiz->dir,ind);
			}
			else{
				busca(raiz->esq,ind);
			}
		}
	}
}
int altura_arv(ponteiro raiz){
	if(raiz==NULL){
		return 0;
	}
	else{
		int esq=altura_arv(raiz->esq);
		int dir=altura_arv(raiz->dir);
		if(esq<dir){
			return dir+1;
		}
		else{
			return esq+1;
		}
	}
}
int quant_nos(ponteiro raiz){
	if(raiz==NULL){
		return 0;
	}
	else{
		return quant_nos(raiz->esq)+1+quant_nos(raiz->dir);
	}
}
ponteiro remover(ponteiro raiz,chave ind){
	if(raiz==NULL){
		return NULL;
	}
	else{
		if(raiz->x==ind){
			if(raiz->dir==NULL&&raiz->esq==NULL){
				free(raiz);
				return NULL;
			}
			else{
				if(raiz->dir!=NULL&&raiz->esq!=NULL){
					ponteiro subs=raiz->esq;
					while(subs->dir!=NULL){
						subs=subs->dir;
					}
					raiz->x=subs->x;
					subs->x=ind;
					raiz->esq=remover(raiz->esq,ind);
					return raiz;
				}
				else{
					ponteiro aux;
					if(raiz->dir!=NULL){
						aux=raiz->dir;
						free(raiz);
					}
					else{
						aux=raiz->esq;
						free(raiz);
					}
					return aux;
				}
			}
		}
		else{
			if(ind<raiz->x){
				raiz->esq=remover(raiz->esq,ind);
			}
			else{
				raiz->dir=remover(raiz->dir,ind);
			}
		}
	}
}
int maior_chave(ponteiro raiz){
	if(raiz!=NULL){
		ponteiro aux=raiz;
		while(aux->dir!=NULL){
			aux=aux->dir;
		}
		return aux->x;
	}
}
