#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	float alt[50],media,soma;
	int i;
	double desvio=0;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	/* Pedindo ao usuário que este insira as 50 alturas e armazenando cada altura inserida numa posição do vetor alt. */
	for(i=0;i<50;i++){
		printf("Insira uma altura:\n");
		scanf("%f",&alt[i]);
	}
	/* Realizando a soma de todas as alturas inseridas para, após este somátorio, dividirmos o mesmo pela quantidade
	 de alturas inseridas[50], calculando a média aritmética. */
	for(i=0;i<50;i++){
		soma+=alt[i];
	}
	media=soma/50;
	/* Realizando o compto do somatório da medição atual subtraida à média aritmética das alturas inseridas, tudo isto
	elevado ao quadrado. (xi - x|)^2 */
	for(i=0,soma=0;i<50;i++){
		soma+=pow(alt[i]-media,2);
	}
	/* Calculando o desvio padrão através da raiz quadrada multiplicação do somatório por 1/N, onde N é o número de alturas inseridas [50] e 
	demonstrando o valor na tela. */
	desvio=sqrt(soma*1/50);
	printf("O desvio padrão das alturas inseridas é: %.1f\n",desvio);
	system("PAUSE");
	return;
}
