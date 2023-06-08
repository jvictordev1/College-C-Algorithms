#include<stdio.h>
#define tam 1000

int vetor[tam],*pvet=&vetor[0];

void inicializavetor();
int pares();
int impares();
int main(){
    int i;

    inicializavetor();
    printf("\nSoma de todos numeros pares: %d.\n",pares());
    printf("Soma de numeros impares eh: %d.\n",impares());
}
void inicializavetor(){//funcao para inicializar vetor
    int i;

    for(i=0;i<tam;i++){
        printf("Insira o valor do vetor[%d]\n",i+1);
        scanf("%d",pvet+i);
    }
}
int pares(){//questao 3 a)
    int i,aux;

    for(i=0,aux=0;i<tam;i++){
        if(!(*(pvet+i)%2)){
            aux++;
        }
        else{
            continue;
        }
    }
    return(aux);
}
int impares(){//questao 3 b)
    int i,aux;

    for(i=0,aux=0;i<tam;i++){
        if(!(*(pvet+i)%2)){
            continue;
        }
        else{
            aux++;
        }
    }
    return((aux%100));
}