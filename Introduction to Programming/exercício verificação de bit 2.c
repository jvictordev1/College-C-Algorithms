#include <stdio.h>

int main()
{
    unsigned char desloca, valor_bit, aux=1;

    printf("\nInsira um valor entre 0 e 255: \n");
    scanf("%hhd", &valor_bit);

    printf("\nInsira a posicao do bit (entre 0 e 7) que se deseja verificar se esta ativo: \n");
    scanf("%hhd",&desloca);

    aux=aux<<desloca;
    valor_bit=valor_bit & aux;

    if(valor_bit)
    {
        printf("O bit consultado esta ativo\n");
    }
    else
    {
        printf("O bit consultado nao esta ativo\n");
    }
}
