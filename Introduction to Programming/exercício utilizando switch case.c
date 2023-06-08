#include<stdio.h>

int main()
{
    int a,b,c=0;

    printf("\nEntre com um valor para a: \n");
    scanf("%d",&a);

    switch(a)
    {
        case 1: b=2;
        break;
        case 2:
        {
            c=3;
            b=a*c;
        }
        break;
        case 3: c=a;
        default:b=500;
    }
    printf("\no valor de a = %d  o valor de b = %d  o valor de c = %d.",a,b,c);
}