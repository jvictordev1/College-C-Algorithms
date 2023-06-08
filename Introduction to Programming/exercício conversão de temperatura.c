#include <stdio.h>

int main()
{
    float celsius,fah;
    int kelvin;

    printf("\nInsira a temperatura em Celsius: \n");
    scanf("%f",&celsius);

    kelvin=celsius+273;
    fah=1.8*celsius+32;

    printf("A temperatura inserida em celsius %.1f Celsius e representada, nas medidas Kelvin e Fahrenheit por\n",celsius);
    printf("%d Kelvin\n%.1f Fahrenheit",kelvin,fah);
}