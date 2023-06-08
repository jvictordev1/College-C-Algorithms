#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	/* Chamada � fun��o usada para que o usu�rio insira o estoque inicial de cada produto em cada armaz�m. */
	estoqueInicial();
	/* Chamada � fun��o que determina quantos itens est�o armazenados em cada armaz�m. */
	itensArmazem();
	/* Chamada � Fun��o que determina qual armaz�m possui a maior quantidade de produto 2 armazenado. */
	maisP2();
	/* Chamada � fun��o que determina o custo de cada produto e calcula o custo de cada produto em cada armaz�m, respectivamente. */
	custo();
	/* Chamada � fun��o que calcula o custo total de estoque em cada armaz�m. */
	estoqueArm();
	/* Chamada � fun��o que calcula o custo total de cada produto em todos armaz�ns. */
	totalProd();
	/* Fim */
	
	system("PAUSE");
	return;
	
}

estoqueInicial(){
	int estoqueProd[500][500],l,c;
	
	/* Fun��o usada para que o usu�rio insira o estoque inicial de cada produto em cada armaz�m. */
	for(l=0;l<500;l++){
		for(c=0;c<500;c++){
			printf("Insira a quantidade do PRODUTO %d no ARMAZ�M %d EM UNIDADES:\n",c+1,l+1);
			scanf("%d",&estoqueProd[l][c]);
		}
	}
	printf("\n");
}

itensArmazem(){
	unsigned long int soma;
	int estoqueProd[500][500],l,c;
	
	/* Fun��o que determina quantos itens est�o armazenados em cada armaz�m. */
	for(l=0;l<500;l++){
		soma=0;
		for(c=0;c<500;c++){
			soma+=estoqueProd[l][c];
		}
		printf("A quantidade de ITENS no armaz�m %d �: %lu.\n",l+1,soma);
	}
	printf("\n");
}

maisP2(){
	int estoqueProd[500][500],l,c,aux,p2;
	
	/* Fun��o que determina qual armaz�m possui a maior quantidade de produto 2 armazenado. */
	for(l=0,aux=0;l<500;l++){
		if(estoqueProd[l][1]>aux){
			aux=estoqueProd[l][1];
			p2=l;
		}
	}
	printf("O armaz�m que cont�m o maior estoque do PRODUTO 2 � o ARMAZ�M %d.\n",p2+1);
	printf("\n");
}

custo(){
	int estoqueProd[500][500],l,c;
	float custo[500];
	
	/* Fun��o que determina o custo de cada produto e calcula o custo de cada produto em cada armaz�m, respectivamente. */
	for(c=0;c<500;c++){
		printf("Insira o custo do produto %d.\n",c+1);
		scanf("%f",&custo[c]);
	}
	printf("\n");
	for(l=0;l<500;l++){
		for(c=0;c<500;c++){
			printf("O custo do PRODUTO %d no ARMAZ�M %d �: R$%.2lf.\n",c+1,l+1,estoqueProd[l][c]*custo[c]);
		}
	}
	printf("\n");
	
}

estoqueArm(){
	int estoqueProd[500][50],l,c;
	unsigned long int prod;
	float custo[500];
	
	/* Fun��o que calcula o custo total de estoque em cada armaz�m. */
	for(l=0;l<500;l++){
		prod=0;
		for(c=0;c<500;c++){
			prod+=estoqueProd[l][c];
		}
		printf("O custo total no ARMAZ�M %d: R$%.2lf.\n",l+1,prod*custo[c-1]);
	}
	printf("\n");
}

totalProd(){
	unsigned long int ptotal;
	int estoqueProd[500][500],l,c;
	float custo[500];
	
	/* Fun��o que calcula o custo total de cada produto em todos armaz�ns. */
	for(c=0;c<500;c++){
		ptotal=0;
		for(l=0;l<500;l++){
			ptotal+=estoqueProd[l][c];
		}
		ptotal=ptotal*custo[c];
		printf("O valor total do PRODUTO %d em TODOS ARMAZ�NS �: R$%ld.\n",c+1,ptotal);
	}
	printf("\n");
}
