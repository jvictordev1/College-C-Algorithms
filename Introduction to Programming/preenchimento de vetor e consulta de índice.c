#include<stdio.h>
#include<locale.h>

int main()
{
	float valores[10];
	int pos;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	for(pos=0;pos<10;pos++)
	{
		printf("Insira o valor desejado para inseri-lo no vetor[%d]:\n",pos+1);
		scanf("%f",&valores[pos]);
	}
	printf("Insira o valor correspondente ao �ndice que quer acessar [1,10]:\n");
	scanf("%d",&pos);
	printf("O valor contido no �ndice %d �: %.2f.\n",pos,valores[pos-1]);
}
