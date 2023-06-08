#include <stdio.h>

int main()
{
    int num,div;

    do
    {
        printf("\nInsira um numero inteiro: \n");
        scanf("%d",&num);
    }while(num<0);
    div=num?num:1;

    do
    {
        if(num%div==0)
        {
            printf("O numero %d eh divisivel por %d.\n",num,div);
        }
        div--;
    }while(div);
}