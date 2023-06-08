#include <stdio.h>

int main()
{
    int mes;

    printf("\nEntre com um valor inteiro de 1 a 12: \n");
    scanf("%d",&mes);

    switch(mes)
    {
        case 1: printf("O %d mes do calendario e janeiro\n",mes);
        break;
        case 2: printf("O %d mes do calendario e fevereiro\n",mes);
        break;
        case 3: printf("O %d mes do calendario e marco\n",mes);
        break;
        case 4: printf("O %d mes do calendario e abril\n",mes);
        break;
        case 5: printf("O %d mes do calendario e maio\n",mes);
        break;
        case 6: printf("O %d mes do calendario e junho\n",mes);
        break;
        case 7: printf("O %d mes do calendario e julho\n",mes);
        break;
        case 8: printf("O %d mes do calendario e agosto\n",mes);
        break;
        case 9: printf("O %d mes do calendario e setembro\n",mes);
        break;
        case 10: printf("O %d mes do calendario e outubro\n",mes);
        break;
        case 11: printf("O %d mes do calendario e novembro\n",mes);
        break;
        case 12: printf("O %d mes do calendario e dezembro\n",mes);
        break;
        default: printf("Nao existe um mes que corresponda ao valor inserido.");
    }
}