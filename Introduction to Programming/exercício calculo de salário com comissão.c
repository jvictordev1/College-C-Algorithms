#include<stdio.h>

int main()
{
    float salario,vendas,comissao;

    printf("Insira seu salario:\n");
    scanf("%f",&salario);

    printf("Insira o valor atingido em vendas:\n");
    scanf("%f",&vendas);

    comissao=vendas*0.15;

    salario=salario+comissao;

    printf("O salario final sera:R$%.2f",salario);
}