#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valor,vaux;
    int pagamento;

    printf("Insira o valor do produto:\n");
    scanf("%f",&valor);
    printf("Insira o tipo de pagamento:\n1-Credito\n2-Debito\n3-Dinheiro.\n");
    scanf("%d",&pagamento);

    switch(pagamento)
    {
        case 1:
        {
           vaux=valor;
           valor=valor*0.05;
           vaux=vaux-valor;
           break; 
        }
        case 2:
        {
            vaux=valor;
            valor=valor*0.07;
            vaux=vaux-valor;
            break;
        }
        case 3:
        {
            vaux=valor;
            valor=valor*0.10;
            vaux=vaux-valor;
            break;
        }
        default:
        {
            printf("Erro! Tipo de pagamento invalido.\n");
            exit(1);
        }
    }
    printf("O valor final do produto sera:%.2f.\n",vaux);
}