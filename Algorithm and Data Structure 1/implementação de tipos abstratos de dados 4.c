#include<stdio.h>

struct nodo{
	int n;
	struct nodo *prox;
};
typedef struct nodo caixa;
caixa *q,*r,*s;
struct nodo t;

int main(){
	t.n=6;
	
	struct nodo quat;
	r=&quat;
	r->n=4;
	r->prox=NULL;
	
	struct nodo tre;
	q=&tre;
	q->n=3;
	q->prox=r;
	
	struct nodo dois;
	dois.n=2;
	dois.prox=q;
	
	struct nodo cinc;
	s=&cinc;
	s->n=5;
	s->prox=&dois;
	
	struct nodo um;
	um.n=1;
	um.prox=s;
	
	return 0;
}
