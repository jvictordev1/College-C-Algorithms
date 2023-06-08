#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define conta 9
#define tnom 30

typedef struct{
    long int ncheq;
    int agencia;
    char nconta[conta];
    char nome[tnom];
    int dv;
    float valor;
}cliente;

void preencher();

int main(){
    int n;

    printf("Insira a quantidade de cheques que serao inseridos:\n");
    scanf("%d",&n);
    printf("\nPreencha:");
    preencher(n);
}
void preencher(int k)
{	
	cliente *d;
    int i;
    float aux;
    for(i=0; i<k; i++) {
        printf("\n[%d] Cheque.",i+1);
        printf("\nNumero do cheque: ");
        scanf("%ld",&d[i].ncheq);
        printf("\nNumero da agencia: ");
        scanf("%d",&d[i].agencia);
        setbuf(stdin,NULL);
        printf("\nNumero da Conta Corrente: ");
        scanf("%9[^\n]",&d[i].nconta);
        setbuf(stdin,NULL);
        printf("\nNome: ");
        scanf("%29[^\n]",&d[i].nome);
        printf("\nDV: ");
        scanf("%d",&d[i].dv);
        printf("\nValor: ");
        scanf("%f",&d[i].valor);
        if(i==0){
        	aux+=d[i].valor;
		}
		else{
			if(d[i].ncheq){
                    if(strcmp(d[i-1].nome,d[i].nome)==0){
				    aux+=d[i].valor;
			    }
			    else{
				    printf("\nSoma dos valores dos cheques de %s eh: R$%.2f\n",d[i-1].nome,aux);
				    aux=0;
			    }
            }
		}
    }
}