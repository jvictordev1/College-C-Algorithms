#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef int CHAVE;

typedef struct{
	CHAVE id;
}registro;

typedef struct{
	registro a[MAX];
	int n_el;
}lista;

void inicializa(lista *p);
int q_el(lista p);
void exib_el(lista p);
int busc_el(lista p,CHAVE ch);
void in_el(lista *p,CHAVE ch);
void rem_el(lista *p);

int main(){
	lista l;
	inicializa(&l);
	exib_el(l);
	in_el(&l,1);
	in_el(&l,2);
	in_el(&l,3);
	in_el(&l,4);
	exib_el(l);
	rem_el(&l);
	exib_el(l);
	rem_el(&l);
	exib_el(l);
	rem_el(&l);
	exib_el(l);
}
void inicializa(lista *p){
	p->n_el=0;
}
int q_el(lista p){
	return(p.n_el);
}
void exib_el(lista p){
	int i;
	if(!q_el(p)){
		printf("Lista vazia!\n");
	}
	else{
		for(i=0;i<p.n_el;i++){
			printf("%d ",p.a[i]);
		}
	}
	printf("\n");
}
int busc_el(lista p,CHAVE ch){
	int i;
	if(!q_el(p)){
		printf("Nao ha elementos nesta lista!\n");
	}
	else{
		for(i=0;i<p.n_el;i++){
			if(p.a[i].id==ch){
				return(i);
			}
			else{
				i++;
			}
		}
		return(-1);
	}
}
void in_el(lista *p,CHAVE ch){
	if(p->n_el>=MAX){
		printf("Nao e possivel inserir mais elementos.\n");
	}
	else{
		p->a[p->n_el].id=ch;
		p->n_el++;
	}
}
void rem_el(lista *p){
	if(!p->n_el){
		printf("Nao ha como remover elementos!\n");
	}
	else{
		p->a[p->n_el].id=0;
		p->n_el--;
	}
}
