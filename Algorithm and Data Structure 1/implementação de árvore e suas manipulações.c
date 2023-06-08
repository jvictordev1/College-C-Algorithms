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

void criaarv(ponteiro *r){
	r=NULL;
}
ponteiro criaelemento(chave i){
	ponteiro el=(ponteiro)malloc(sizeof(elemento));
	el->x=i;
	el->dir=NULL;
	el->esq=NULL;
	return(el);
}
ponteiro insereelemento(ponteiro r,ponteiro el){
	if(r==NULL){
		return el;
	}
	if(el->x<r->x){
		r->esq=insereelemento(r->esq,el);
	}
	else{
		r->dir=insereelemento(r->dir,el);
	}
	return r;
}
int verifica(ponteiro r,chave i){
	if(r==NULL){
		return 0;
	}
	else{
		if(r->x==i){
			return 1;
		}
		else{
			if(r->x>i){
				return(verifica(r->esq,i));
			}
			else{
				return(verifica(r->dir,i));
			}
		}
	}
}
int numnos(ponteiro raiz){
	if(raiz==NULL){
		return 0;
	}
	else{
		return(numnos(raiz->dir)+1+numnos(raiz->esq));
	}
}
void learvore(ponteiro raiz){
	if(raiz!=NULL){
		learvore(raiz->esq);
		learvore(raiz->dir);
		printf("%d ",raiz->x);
	}
}
ponteiro buscaaux(ponteiro raiz,chave i){
	ponteiro atual=raiz;
	ponteiro p=NULL;
	while(atual){
		if(atual->x==i){
			return atual;
		}
		else{
			p=atual;
			if(i<atual->x){
				atual=atual->esq;
			}
			else{
				atual=atual->dir;
			}
		}
	}
	return NULL;
}

int main(){
	ponteiro raiz=a.raiz;
	criaarv(&raiz);
	raiz=insereelemento(raiz,criaelemento(10));
	raiz=insereelemento(raiz,criaelemento(6));
	raiz=insereelemento(raiz,criaelemento(5));
	raiz=insereelemento(raiz,criaelemento(7));
	raiz=insereelemento(raiz,criaelemento(15));
	raiz=insereelemento(raiz,criaelemento(11));
	raiz=insereelemento(raiz,criaelemento(20));
	printf("%d\n",verifica(raiz,5));
	printf("%d\n",numnos(raiz));
	learvore(raiz);
	return 0;
}
