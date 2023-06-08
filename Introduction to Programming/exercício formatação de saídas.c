#include <stdio.h>

int main()

{
	/* Construa um programa em C que utilizando-se dos códigos % escreva na saída padrão a seguinte sequência no formato 
	apresentado. |teste   |00027|   28.37|      funcionou| */
	
	
	printf("|%-15s|%05d|%10.2f|%20s|","teste",27,28.37,"funcionou");

	/* Usando o '%-' vc coloca colunas a direita, não usando o '-' vc coloca colunas à esquerda */
}
