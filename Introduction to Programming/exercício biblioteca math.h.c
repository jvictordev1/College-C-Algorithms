#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("\nInsira um valor real para a variavel x: \n");
    scanf("%lf",&x);

    printf("\nO resultado da expressao V(3+x)^3*5 sera: %.2lf",sqrt(pow(3+x,3)*5));
}