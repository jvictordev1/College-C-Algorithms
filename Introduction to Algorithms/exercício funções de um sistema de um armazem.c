#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	/* Chamada à função usada para que o usuário insira o estoque inicial de cada produto em cada armazém. */
	estoqueInicial();
	/* Chamada à função que determina quantos itens estão armazenados em cada armazém. */
	itensArmazem();
	/* Chamada à Função que determina qual armazém possui a maior quantidade de produto 2 armazenado. */
	maisP2();
	/* Chamada à função que determina o custo de cada produto e calcula o custo de cada produto em cada armazém, respectivamente. */
	custo();
	/* Chamada à função que calcula o custo total de estoque em cada armazém. */
	estoqueArm();
	/* Chamada à função que calcula o custo total de cada produto em todos armazéns. */
	totalProd();
	/* Fim */
	
	system("PAUSE");
	return;
	
}

estoqueInicial(){
	int estoqueProd[500][500],l,c;
	
	/* Função usada para que o usuário insira o estoque inicial de cada produto em cada armazém. */
	for(l=0;l<500;l++){
		for(c=0;c<500;c++){
			printf("Insira a quantidade do PRODUTO %d no ARMAZÉM %d EM UNIDADES:\n",c+1,l+1);
			scanf("%d",&estoqueProd[l][c]);
		}
	}
	printf("\n");
}

itensArmazem(){
	unsigned long int soma;
	int estoqueProd[500][500],l,c;
	
	/* Função que determina quantos itens estão armazenados em cada armazém. */
	for(l=0;l<500;l++){
		soma=0;
		for(c=0;c<500;c++){
			soma+=estoqueProd[l][c];
		}
		printf("A quantidade de ITENS no armazém %d é: %lu.\n",l+1,soma);
	}
	printf("\n");
}

maisP2(){
	int estoqueProd[500][500],l,c,aux,p2;
	
	/* Função que determina qual armazém possui a maior quantidade de produto 2 armazenado. */
	for(l=0,aux=0;l<500;l++){
		if(estoqueProd[l][1]>aux){
			aux=estoqueProd[l][1];
			p2=l;
		}
	}
	printf("O armazém que contém o maior estoque do PRODUTO 2 é o ARMAZÉM %d.\n",p2+1);
	printf("\n");
}

custo(){
	int estoqueProd[500][500],l,c;
	float custo[500];
	
	/* Função que determina o custo de cada produto e calcula o custo de cada produto em cada armazém, respectivamente. */
	for(c=0;c<500;c++){
		printf("Insira o custo do produto %d.\n",c+1);
		scanf("%f",&custo[c]);
	}
	printf("\n");
	for(l=0;l<500;l++){
		for(c=0;c<500;c++){
			printf("O custo do PRODUTO %d no ARMAZÉM %d é: R$%.2lf.\n",c+1,l+1,estoqueProd[l][c]*custo[c]);
		}
	}
	printf("\n");
	
}

estoqueArm(){
	int estoqueProd[500][50],l,c;
	unsigned long int prod;
	float custo[500];
	
	/* Função que calcula o custo total de estoque em cada armazém. */
	for(l=0;l<500;l++){
		prod=0;
		for(c=0;c<500;c++){
			prod+=estoqueProd[l][c];
		}
		printf("O custo total no ARMAZÉM %d: R$%.2lf.\n",l+1,prod*custo[c-1]);
	}
	printf("\n");
}

totalProd(){
	unsigned long int ptotal;
	int estoqueProd[500][500],l,c;
	float custo[500];
	
	/* Função que calcula o custo total de cada produto em todos armazéns. */
	for(c=0;c<500;c++){
		ptotal=0;
		for(l=0;l<500;l++){
			ptotal+=estoqueProd[l][c];
		}
		ptotal=ptotal*custo[c];
		printf("O valor total do PRODUTO %d em TODOS ARMAZÉNS é: R$%ld.\n",c+1,ptotal);
	}
	printf("\n");
}
