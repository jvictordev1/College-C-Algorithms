#include <stdio.h>
#include<locale.h>

int main()
{
	float numeros[10];
	int posicao=0;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	while(posicao<10)
	{
		printf("Insira um valor real para o vetor[%d].\n",posicao+1);
		scanf("%f",&numeros[posicao]);
		posicao++;
	}
	printf("Digite o índice do vetor a ser acessado:\n");
	scanf("%d",&posicao);
	printf("O valor presente neste vetor é: %.2f.\n",numeros[posicao-1]);
}
