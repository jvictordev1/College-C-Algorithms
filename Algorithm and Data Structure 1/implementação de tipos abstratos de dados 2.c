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
	t.n=6;
	
	struct nodo cinc;
	s=&cinc;
	s->n=5;
	s->prox=NULL;
	
	struct nodo quat;
	r=&quat;
	r->n=4;
	r->prox=NULL;
	
	struct nodo tre;
	tre.n=3;
	tre.prox=r;
	
	struct nodo dois;
	q=&dois;
	q->n=2;
	q->prox=&tre;
	
	struct nodo um;
	um.n=1;
	um.prox=q;
	
	/*letra a - Copiamos o endereço de q->prox para q*/
	/*printf("%p\n",q->prox);
	q=q->prox;
	printf("%p\n",q);
	
	/*letra b - Copiamos o conteudo de q->prox para q*/
	/*printf("%d\n",q->n);
	*q=*(q->prox);
	printf("%d\n",q->n);
	
	/*letra c - Copiamos o endereço de memoria de q->prox->prox para q->prox*/
	/*printf("%d\n",q->prox->n);
	q->prox=q->prox->prox;
	printf("%d\n",q->prox->n);
	
	/*letra d - Copiamos o endereço de memoria de r->prox para q*/
	/*printf("%p\n",q);
	printf("%p\n",r->prox);
	q=r->prox;
	printf("%p\n",q);
	
	/*letra e - ERRO, copiando ponteiro r nulo para ponteiro inteiro q*/
	/*printf("%d\n",q->n);
	*q=*(r->prox);
	printf("%d\n",q->n);
	
	/*letra f - s->prox é nulo, atualizamos para o mesmo endereço de q->prox e após isso atualizamos q->prox para o endereço de s*/
	/*printf("%p\n",s->prox);
	s->prox=q->prox;
	printf("%d\n",s->prox->n);
	q->prox=s;
	printf("%d\n",q->prox->n);
	
	/*letra g - Fazemos s->prox (ponteiro nulo) apontar para o endereço de s, copiamos o conteudo da struct de ponteiro q
				para a struct t, copiamos o conteudo da struct de ponteiro s para a de ponteiro q, e copiamos a struct t
				para a struct de ponteiro s*/
	/*printf("%p\n",s->prox);
	s->prox=s;
	printf("%p\n",s->prox);
	printf("%d\n",t.n);
	t=*q;
	printf("%d\n",t.n);
	printf("%d\n",q->n);
	*q=*s;
	printf("%d\n",q->n);
	printf("%d\n",s->n);
	*s=t;
	printf("%d\n",s->n);
	
	/*letra h - ERRO, tentativa de atribuição de uma struct a um ponteiro (tipos incompativeis)*/
	/*printf("%p\n",q);
	q=t;
	printf("%p\n",q);
	
	/*letra i - Copia o endereço de q para o ponteiro r->prox (nulo), depois faz q apontar para o r->prox, voltando para a struct
				que o ponteiro r->prox aponta*/
	/*printf("%p\n",r->prox);
	r->prox=q;
	printf("%p\n",r->prox);
	q=q->prox->prox->prox;
	printf("%d\n",q->n);
	
	/*letra j - Copia o endereço de memoria de r para s*/
	/*printf("%d\n",s->n);
	printf("%d\n",r->n);
	s=r;
	printf("%d\n",s->n);
	printf("%d\n",r->n);
	
	/*letra k - Atualiza o enredeço de memoria que o ponteuri r aponta, faz apontar para a struct t*/
	/*printf("%d\n",t.n);
	printf("%d\n",r->n);
	r=&t;
	printf("%d\n",r->n);
	
	/*letra m - Faz o ponteiro r->prox (ponteiro nulo) apontar para o mesmo endereço de r*/
	/*printf("%p\n",r->prox);
	printf("%p\n",r);
	r->prox=r;
	printf("%p\n",r->prox);
	printf("%p\n",r);
	
	/*letra n - Faz o ponteiro s->prox (ponteiro nulo) apontar para o mesmo endereço de q->prox*/
	/*printf("%p\n",s->prox);
	printf("%p\n",q->prox);
	s->prox=q->prox;
	printf("%p\n",s->prox);
	printf("%p\n",q->prox);
	
	/*letra o -  Copia o valor da variavel inteira q para o ponteiro r->n (atualiza o endereço de memoria q r->n aponta)*/
	/*printf("%d\n",g);
	printf("%d\n",r->n);
	r->n=g;
	printf("%p\n",r->n);
	
	/*letra p - Copia o conteudo que o ponteiro q->prox->n aponta para o conteudo do ponteiro s->n*/
	/*printf("%d\n",q->prox->n);
	printf("%d\n",s->n);
	q->prox->n=s->n;
	printf("%d\n",q->prox->n);
	*/
}
