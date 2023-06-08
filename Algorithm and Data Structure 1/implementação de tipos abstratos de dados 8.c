#include<stdio.h>

struct nodo{
	int n;
	struct nodo *prox;
};
typedef struct nodo caixa;
caixa *q,*r,*s;
struct nodo t;

int main(){
	t.n=5;
	
	struct nodo quat;
	r=&quat;
	r->n=4;
	r->prox=NULL;
	
	struct nodo tre;
	tre.n=3;
	tre.prox=r;
	
	struct nodo seis;
	s=&seis;
	s->n=6;
	s->prox=&tre;
	
	struct nodo dois;
	q=&dois;
	q->n=2;
	q->prox=s;
	
	struct nodo um;
	um.n=1;
	um.prox=q;
	
	printf("%d\n",t.n);
	printf("%d\n",s->prox->n);
	printf("%d\n",q->prox->n);
	
	return 0;
}
