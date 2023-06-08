#include <stdio.h>

int main()
{
    int idade;

    printf("\nInsira sua idade: \n");
    scanf("%d",&idade);

    if(idade<12)
    {
        printf("\nVoce e classificado como crianca.");
    }
    else
    {
        if(idade<=18)
        {
            printf("\nVoce e classificado como adolescente");
        }
        else
        {
            printf("\nVoce e classificado como adulto");
        }
    }
}