#include<stdio.h>

struct nodo{
	int n;
	struct nodo *prox;
};
typedef struct nodo caixa;
caixa *q,*r,*s;
struct nodo t;
int g;

int main(){
	q=(caixa*)malloc(sizeof(caixa));
	q->n=1;
	printf("%d\n",q->n);
	q->prox=(caixa*)malloc(sizeof(caixa));
	
	q->prox->n=2;
	printf("%d\n",q->prox->n);
	q->prox->prox=(caixa*)malloc(sizeof(caixa));
	
	q->prox->prox->n=3;
	printf("%d\n",q->prox->prox->n);
	q->prox->prox->prox=(caixa*)malloc(sizeof(caixa));
	
	r=q->prox->prox->prox;
	r->n=4;
	printf("%d\n",r->n);
	r->prox=NULL;
	
	s=(caixa*)malloc(sizeof(caixa));
	s->n=5;
	printf("%d\n",s->n);
	s->prox=NULL;
	
	t.n=6;
	printf("%d\n",t.n);
	
	return 0;
}
