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
	
	struct nodo cinc;
	s=&cinc;
	s->n=5;
	s->prox=NULL;
	
	struct nodo quat;
	quat.n=4;
	quat.prox=s;
	
	struct nodo dois;
	q=&dois;
	q->n=2;
	q->prox=&quat;
	
	struct nodo tre;
	tre.n=3;
	tre.prox=q;
	r=tre.prox;
	
	struct nodo um;
	um.n=1;
	um.prox=q;
	
	printf("%d\n",t.n);
	printf("%d\n",q->prox->n);
	printf("%d\n",r->n);
	
	return 0;
}
