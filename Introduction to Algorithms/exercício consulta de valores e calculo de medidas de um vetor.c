#include<stdio.h>
#define tam 100

int vetor[tam],*pvet=&vetor[0];

void inicializavetor();
int media();
int maiorv();
int menorv();
int impares();
int mult3();
int main(){
    int i;

    inicializavetor();
    printf("\nA media dos %d numeros inseridos eh: %d.\n",tam,media());
    printf("O maior dentre os %d numeros inseridos eh: %d.\n",tam,maiorv());
    printf("O menor dentre os %d numeros inseridos eh: %d.\n",tam,menorv());
    printf("O percentual de numeros impares eh: %d%%.\n",impares());
    printf("O percentual de numeros multiplos de 3 eh: %d%%.\n",mult3());
}
void inicializavetor(){//funcao para inicializar vetor
    int i;

    for(i=0;i<tam;i++){
        printf("Insira o valor do vetor[%d]\n",i+1);
        scanf("%d",pvet+i);
    }
}
int media(){//questao 3 a)
    int i,media;

    for(i=0,media=0;i<tam;i++){
        media+=*(pvet+i);
    }
    media=media/tam;
    return(media);
}
int maiorv(){//questao 3 b)
    int i,aux;

    for(i=0;i<tam;i++){
        if(!i){
            aux=*(pvet+i);
        }
        else{
            if(aux<*(pvet+i)){
                aux=*(pvet+i);
            }
        }
    }
    return(aux);
}
int menorv(){//questao 3 c)
    int i,aux;

    for(i=0;i<tam;i++){
        if(!i){
            aux=*(pvet+i);
        }
        else{
            if(aux>*(pvet+i)){
                aux=*(pvet+i);
            }
        }
    }
    return(aux);
}
int impares(){//questao 3 d)
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
int mult3(){//questao 3 e)
    int i,aux;

    for(i=0,aux=0;i<tam;i++){
        if(!(*(pvet+i)%3)){
            aux++;
        }
        else{
            continue;
        }
    }
    return((aux%100));
}