#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,op,res=0;

    printf("\nInsira um valor inteiro para a: \n");
    scanf("%d",&a);
    printf("Insira um valor inteiro para b: \n");
    scanf("%d",&b);

    printf("Insira '1' para soma, '2' para subtracao, '3' para multiplicacao ou '4' para divisao: \n");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
        {
            res=a+b;
        }
        break;
        case 2:
        {
            res=a-b;
        }
        break;
        case 3:
        {
            res=a*b;
        }
        break;
        case 4:
        {
            if(b)
            {
                res=a/b;
            }
            else
            {
                printf("Divisao por zero!");
                exit(2);
            }
        }
        break;
        default:("\nOpcao invalida");
        exit(1);
    }
    printf("O resultado da operacao escolhida utilizando os operandos lidos sera: %d",res);
}