#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	float alt[50],media,soma;
	int i;
	double desvio=0;
	
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	/* Pedindo ao usu�rio que este insira as 50 alturas e armazenando cada altura inserida numa posi��o do vetor alt. */
	for(i=0;i<50;i++){
		printf("Insira uma altura:\n");
		scanf("%f",&alt[i]);
	}
	/* Realizando a soma de todas as alturas inseridas para, ap�s este som�torio, dividirmos o mesmo pela quantidade
	 de alturas inseridas[50], calculando a m�dia aritm�tica. */
	for(i=0;i<50;i++){
		soma+=alt[i];
	}
	media=soma/50;
	/* Realizando o compto do somat�rio da medi��o atual subtraida � m�dia aritm�tica das alturas inseridas, tudo isto
	elevado ao quadrado. (xi - x|)^2 */
	for(i=0,soma=0;i<50;i++){
		soma+=pow(alt[i]-media,2);
	}
	/* Calculando o desvio padr�o atrav�s da raiz quadrada multiplica��o do somat�rio por 1/N, onde N � o n�mero de alturas inseridas [50] e 
	demonstrando o valor na tela. */
	desvio=sqrt(soma*1/50);
	printf("O desvio padr�o das alturas inseridas �: %.1f\n",desvio);
	system("PAUSE");
	return;
}
