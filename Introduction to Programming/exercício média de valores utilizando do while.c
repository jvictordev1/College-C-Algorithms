#include <stdio.h>

int main()
{
    int n1,media=0,divisao=0;

    do{
    printf("\nInsira um numero natural qualquer (entre com um numero negativo para sair): \n");
    scanf("%d",&n1);
    if(n1>0)
    {
        media+=n1;
        divisao++;
    }
    }while(n1>=0);
    media=media/divisao;
    printf("A media dos valores inseridos sera: %d\n",media);
}