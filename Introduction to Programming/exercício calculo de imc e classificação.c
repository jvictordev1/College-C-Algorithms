#include<stdio.h>
#include<math.h>

int main()
{
    float peso,altura,imc,aux;

    do
    {
        printf("Insira sua altura em metros:\n");
        scanf("%f",&altura);
    }while(altura<0);
    do
    {
        printf("Insira seu peso em kg:\n");
        scanf("%f",&peso);
    }while(peso<0);
    aux=pow(altura,2);

    imc=(peso/aux);

    printf("Seu IMC eh %.2f. Logo esta classificado como ",imc);

    if(imc>=18.5 && imc<=25)
    {
        printf("Normal.\n");
    }
    if(imc>=25 && imc<=30)
    {
        printf("Sobrepeso.\n");
    }
    if(imc>=30 && imc<=40)
    {
        printf("Obesidade.\n");
    }
    else
    {
        printf("Obesidade grave.\n");
    }
}