#include<stdio.h>
#include<stdlib.h>

typedef int chave;
typedef struct elemento* pont;
typedef struct{
	pont raiz;
}arv;
typedef struct elemento{
	chave ch;
	pont esq;
	pont dir;
}ele;
arv a;

void cria_arv(arv *a){
	a->raiz=NULL;
}
pont insere_ele(pont raiz,chave i){
	if(raiz==NULL){
		raiz=(pont)malloc(sizeof(ele));
		raiz->ch=i;
		raiz->dir=raiz->esq=NULL;
	}
	else{
		if(i<raiz->ch){
			raiz->esq=insere_ele(raiz->esq,i);
		}
		else{
			raiz->dir=insere_ele(raiz->dir,i);
		}
		return raiz;
	}
}
void imprime_arv(pont raiz){
	while(raiz){
		imprime_arv(raiz->esq);
		imprime_arv(raiz->dir);
		printf("%d\n",raiz->ch);
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
int busca(pont raiz,chave i){
	if(raiz==NULL){
		return 0;
	}
	else{
		if(raiz->ch==i){
			return 1;
		}
		else{
			if(raiz->ch>i){
				busca(raiz->esq,i);
			}
			else{
				busca(raiz->dir,i);
			}
		}
	}
}
int altura_arv(pont raiz){
	if(raiz==NULL){
		return -1;
	}
	else{
		int esq=altura(raiz->esq);
		int dir=altura(raiz->dir);
		if(esq>dir){
			return esq+1;
		}
		else{
			return dir+1;
		}
	}
}
int quantnos(pont raiz){
	if(raiz==NULL){
		return 0;
	}
	else{
		return(quantnos(raiz->dir)+1+quantnos(raiz->esq));
	}
}
pont remover(pont raiz,chave i){
	if(raiz==NULL){
		printf("Nao eh possivel realizar esta operacao!\n");
		return NULL;
	}
	else{
		if(raiz->ch==i){
			if(raiz->dir==NULL&&raiz->esq==NULL){
				free(raiz);
				return NULL;
			}
			else{
				if(raiz->dir!=NULL&&raiz->esq!=NULL){
					pont aux=raiz->esq;
					while(aux->dir){
						aux=aux->dir;
					}
					raiz->ch=aux->ch;
					aux->ch=i;
					raiz->esq=remover(raiz->esq,i);
					return raiz;
				}
				else{
					pont aux;
					if(raiz->dir!=NULL){
						aux=raiz->dir;
					}
					else{
						aux=raiz->esq;
					}
					free(raiz);
					return aux;
				}
			}
		}
		else{
			if(i<raiz->ch){
				raiz->esq=remover(raiz->esq,i);
			}
			else{
				raiz->dir=remover(raiz->dir,i);
			}
		}
	}
}
