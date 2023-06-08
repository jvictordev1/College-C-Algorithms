#include<stdio.h>
#include<locale.h>

int main()
{
	long int num,fat=1,aux;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	do
	{
		printf("Insira um número natural:\n");
		scanf("%ld",&num);
	}while(num<0);
	
	for(aux=2;aux<=num;aux++)
	{
		fat*=aux;
	}
	printf("O fatorial do número inserido é: %ld.",fat);
}
