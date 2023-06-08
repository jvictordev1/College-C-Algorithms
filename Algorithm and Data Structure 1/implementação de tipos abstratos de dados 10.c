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
	quat.n=4;
	quat.prox=NULL;
	
	struct nodo cinc;
	s=&cinc;
	s->n=5;
	s->prox=&quat;
	
	struct nodo tre;
	r=&tre;
	r->n=3;
	r->prox=s;
	
	struct nodo dois;
	q=&dois;
	q->n=2;
	q->prox=r;
	
	struct nodo um;
	um.n=1;
	um.prox=q;
	
	printf("%d\n",t.n);
	printf("%d\n",s->prox->n);
	printf("%d\n",r->prox->n);
	
	return 0;
}
