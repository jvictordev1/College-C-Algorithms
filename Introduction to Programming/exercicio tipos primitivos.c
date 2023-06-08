#include <stdio.h>

int main()
{
	/* Construa um programa, na ling. C, que solicite ao usuário o fornecimento de um valor real, através da entrada padrão, 
	e o retorne na saída padrão com dois dígitos de precisão */
	
	float real;
	
	printf("Insira um valor real: \n");
	scanf("%f", &real);
	printf("\nO valor inserido, com dois digitos de precisao e: %.2f\n", real);
}
