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
	
	struct nodo cinc;
	s=&cinc;
	s->n=5;
	s->prox=r;
	
	struct nodo tre;
	tre.n=3;
	tre.prox=s;
	
	struct nodo dois;
	q=&dois;
	q->n=2;
	q->prox=&tre;
	
	struct nodo um;
	um.n=1;
	um.prox=q;
	
	printf("%d\n",t.n);
	printf("%d\n",s->prox->n);
	printf("%d\n",tre.prox->n);
	
	return 0;
}
