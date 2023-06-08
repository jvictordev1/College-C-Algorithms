#include <stdio.h>

int main()
{
    int n1,media=0,divisao=0;

    printf("\nInsira um numero inteiro: \n");
    scanf("%d",&n1);
    while(n1>=0)
    {
        media+=n1;
        divisao++;
        printf("Insira um numero inteiro: \n");
        scanf("%d",&n1);
    }
    media=media/divisao;
    printf("A media desses numeros sera: %d",media);
}