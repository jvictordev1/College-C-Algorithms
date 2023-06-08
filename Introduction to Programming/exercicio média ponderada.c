#include <stdio.h>

int main()
{
    float nota, notasPond=0.0;
	int peso, pesos=0;
	
	printf("Forneca sua primeira nota: \n");
	scanf("%f",&nota);
	printf("Forneca o peso da primeira nota: \n");
	scanf("%d",&peso);

	notasPond += nota*peso;
	pesos += peso;

	printf("Forneca sua segunda nota: \n");
	scanf("%f",&nota);
	printf("Forneca o peso da segunda nota: \n");
	scanf("%d",&peso);

	notasPond += nota*peso;
	pesos += peso;

	printf("Forneca sua terceira nota: \n");
	scanf("%f",&nota);
	printf("Forneca o peso da terceira nota: \n");
	scanf("%d",&peso);

	notasPond += nota*peso;

	pesos += peso;

	printf("\nA media ponderada sera %.1f", notasPond/pesos);
}