#include <stdio.h>

int main()
{
    int desloca, valor_byte, aux=1;

    printf("\nInsira um valor entre 0 e 255: \n");
    scanf("%d", &valor_byte);

    printf("\nInsira a posicao do bit (entre 7 e 0) que se deseja saber o valor: \n");
    scanf("%d",&desloca);

    aux=aux<<desloca;
    valor_byte=valor_byte&aux;
    valor_byte=valor_byte>>desloca;

    printf("\nO valor do byte e: %d\n",valor_byte);
}