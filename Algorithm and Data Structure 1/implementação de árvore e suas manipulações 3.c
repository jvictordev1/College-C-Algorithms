#include<stdio.h>
#include<stdlib.h>

typedef int chave;
typedef struct elem* ponteiro;

typedef struct{
	ponteiro raiz;
}arv;
typedef struct elem{
	chave ind;
	ponteiro esq;
	ponteiro dir;
}elem;
arv a;
arv b;

void cria_arv(arv *r){
	r->raiz=NULL;
}
ponteiro insere_ele(ponteiro r,chave i){
	if(r==NULL){
		r=(ponteiro)malloc(sizeof(elem));
		r->ind=i;
		r->dir=r->esq=NULL;
	}
	else{
		if(i<r->ind){
			r->esq=insere_ele(r->esq,i);
		}
		else{
			r->dir=insere_ele(r->dir,i);
		}
		return r;
	}
}
void imprime(ponteiro r){
	if(r!=NULL){
		imprime(r->esq);
		printf("%d ",r->ind);
		imprime(r->dir);
	}
}
ponteiro busca(ponteiro r,chave i){
	if(r==NULL){
		return NULL;
	}
	else{
		if(r->ind==i){
			return r;
		}
		else{
			if(i<r->ind){
				busca(r->esq,i);
			}
			else{
				busca(r->dir,i);
			}
		}
	}
}
int altura_arv(ponteiro r){
	if(r==NULL){
		return -1;
	}
	else{
		int esq,dir;
		esq=altura_arv(r->esq);
		dir=altura_arv(r->dir);
		if(esq<dir){
			return dir+1;
		}
		else{
			return esq+1;
		}
	}
}
int quant_nos(ponteiro r){
	if(r==NULL){
		return 0;
	}
	else{
		return 1+quant_nos(r->dir)+quant_nos(r->esq);
	}
}
ponteiro remover(ponteiro r,chave i){
	if(r==NULL){
		return NULL;
	}
	else{
		if(r->ind==i){
			if(r->dir==NULL&&r->esq==NULL){
				free(r);
				return NULL;
			}
			else{
				if(r->dir!=NULL&&r->esq!=NULL){
					ponteiro subs=r->esq;
					while(subs->dir){
						subs=subs->dir;
					}
					r->ind=subs->ind;
					subs->ind=i;
					r->esq=remover(r->esq,i);
					return r;
				}
				else{
					ponteiro aux;
					if(r->esq!=NULL){
						aux=r->esq;
						free(r);
						return aux;
					}
					else{
						aux=r->dir;
						free(r);
						return aux;
					}
				}
			}
		}
		else{
			if(i<r->ind){
				r->esq=remover(r->esq,i);
			}
			else{
				r->dir=remover(r->dir,i);
			}
		}
	}
}
int maior_chave(ponteiro r){
	if(r->dir==NULL){
		return r->ind;
	}
	else{
		maior_chave(r->dir);
	}
}
int main(){
	int i=500;
	cria_arv(&a);
	cria_arv(&b);
	a.raiz=insere_ele(a.raiz,100);
	b.raiz=insere_ele(b.raiz,100);
	a.raiz=insere_ele(a.raiz,90);
	b.raiz=insere_ele(b.raiz,10);
	printf("%d\n",compara(a.raiz,b.raiz));
	
	return 0;
}
