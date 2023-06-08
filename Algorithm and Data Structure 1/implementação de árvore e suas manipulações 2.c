#include<stdio.h>
#include<stdlib.h>

typedef int chave;
typedef struct elemento* ponteiro;
typedef struct{
	ponteiro raiz;
}arv;
typedef struct elemento{
	chave ch;
	ponteiro esq;
	ponteiro dir;
}elemento;
arv a;

void inicializa_arv(arv *a){
	a->raiz=NULL;
}
ponteiro insere_arv(ponteiro raiz,chave i){
	if(!raiz){
		raiz=(ponteiro)malloc(sizeof(elemento));
		raiz->ch=i;
		raiz->dir=raiz->esq=NULL;
	}
	else{
		if(i<raiz->ch){
			raiz->esq=insere_arv(raiz->esq,i);
		}
		else{
			raiz->dir=insere_arv(raiz->dir,i);
		}
		return raiz;
	}
}
void imprime(ponteiro raiz){
	if(raiz!=NULL){
		imprime(raiz->esq);
		imprime(raiz->dir);
		printf("%d\n",raiz->ch);
	}
}
ponteiro busca(ponteiro raiz,chave i){
	if(!raiz){
		return NULL;
	}
	else{
		if(raiz->ch==i){
			return raiz;
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
int alturaarv(ponteiro raiz){
	if(!raiz){
		return -1;
	}
	else{
		int esq=alturaarv(raiz->esq);
		int dir=alturaarv(raiz->dir);
		if(esq>dir){
			return esq+1;
		}
		else{
			return dir+1;
		}
	}
}
int quantnos(ponteiro raiz){
	if(!raiz){
		return 0;
	}
	else{
		return(quantnos(raiz->dir)+1+quantnos(raiz->esq));
	}
}
ponteiro remove_no(ponteiro raiz,chave i){
	if(raiz==NULL){
		printf("Operacao de remocao negada\n");
		return NULL;
	}
	else{
		if(raiz->ch==i){
			if(raiz->esq==NULL&&raiz->dir==NULL){
				free(raiz);
				return NULL;
			}
			else{
				if(raiz->dir!=NULL&&raiz->esq!=NULL){
					ponteiro aux=raiz->esq;
					while(aux->dir!=NULL){
						aux=aux->dir;
					}
					raiz->ch=aux->ch;
					aux->ch=i;
					raiz->esq=remove_no(raiz->esq,i);
					return(raiz);
				}
				else{
					ponteiro aux;
					if(raiz->esq!=NULL){
						aux=raiz->esq;
					}
					else{
						aux=raiz->dir;
					}
					free(raiz);
					return aux;
				}
			}
		}
		else{
			ponteiro remover=busca(raiz,i);
			if(raiz->ch>remover->ch){
				raiz->esq=remove_no(raiz->esq,i);
			}
			else{
				raiz->dir=remove_no(raiz->dir,i);
			}
			return raiz;
		}
	}
}
chave maior_val(ponteiro raiz){
	if(raiz==NULL){
		return 0;
	}
	else{
		ponteiro aux=raiz;
		chave maior=aux->ch;
		while(aux->dir){
			aux=aux->dir;
			maior=aux->ch;
		}
		return maior;
	}
}
int main(){
	int i=500;
	inicializa_arv(&a);
	if(busca(a.raiz,i)){
		printf("Valor %d encontrado!\n",busca(a.raiz,i)->ch);
	}
	else{
		printf("Valor %d nao encontrado!\n",i);
	}
	a.raiz=insere_arv(a.raiz,500);
	if(busca(a.raiz,i)){
		printf("Valor %d encontrado!\n",busca(a.raiz,i)->ch);
	}
	else{
		printf("Valor %d nao encontrado!\n",i);
	}
	a.raiz=insere_arv(a.raiz,650);
	a.raiz=insere_arv(a.raiz,300);
	a.raiz=insere_arv(a.raiz,700);
	a.raiz=insere_arv(a.raiz,900);
	printf("Arvore EDR:\n");
	imprime(a.raiz);
	printf("\n");
	if(busca(a.raiz,i)){
		printf("Valor %d encontrado!\n",busca(a.raiz,i)->ch);
	}
	else{
		printf("Valor %d nao encontrado!\n",i);
	}
	printf("Altura: %d\n",alturaarv(a.raiz));
	printf("Quantidade de nos: %d\n",quantnos(a.raiz));
	remove_no(a.raiz,650);
	printf("\nArvore EDR:\n");
	imprime(a.raiz);
	printf("\n");
	printf("Maior valor: %d\n",maior_val(a.raiz));
	return 0;
}
