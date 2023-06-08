#include<stdio.h>
#include<locale.h>

int main()
{
	float valores[10],menor_valor;
	int pos,menor_ind;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	for(pos=0;pos<10;pos++)
	{
		printf("Digite um número real:\n");
		scanf("%f",&valores[pos]);
	}
	menor_valor=valores[0];
	menor_ind=0;
	for(pos=1;pos<10;pos++)
	{
		if(menor_valor>valores[pos])
		{
			menor_valor=valores[pos];
			menor_ind=pos;
		}
	}
	printf("O menor valor está no índice %d.\n",menor_ind+1);
}
