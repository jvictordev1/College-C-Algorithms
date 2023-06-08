#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 20
#define tnom 30
#define plc 8
#define nmax 5000

typedef struct{
    char prop[tnom];
    char combustivel[tam];
    char modelo[tnom];
    char cor[tam];
    char chassi[tam];
    char placa[plc];
    int ano;
}reg;

reg d[nmax];

void preencher();
void props();
void trocaprop();

int main(){
    int op;

    printf("\nPreencha a ficha dos %d veiculos: \n",nmax);
    preencher();
    printf("Lista dos proprietarios com veiculos do ano 1980 ou posterior movidos a diesel: \n");
    props();
    printf("\nDeseja alterar o proprietario de algum dos veiculos?\n");
    do{
        printf("1 - Sim | 2 - Nao\n");
        scanf("%d",&op);
    }while(op<1||op>2);
    if(op==1){
        trocaprop();
    }
    else{
        exit(0);
    }
}
void preencher(){//questao 1
    int i;

    for(i=0;i<nmax;i++){
        printf("\n[%d] Registro.",i+1);
        printf("\nNome do proprietario: ");
        scanf("%29[^\n]",&d[i].prop);
        fflush(stdin);
        printf("\nTipo de combustivel: ");
        scanf("%19s",&d[i].combustivel);
        fflush(stdin);
        printf("\nModelo: ");
        scanf("%29s",&d[i].modelo);
        fflush(stdin);
        printf("\nCor: ");
        scanf("%19s",&d[i].cor);
        fflush(stdin);
        printf("\nChassi: ");
        scanf("%19s",&d[i].chassi);
        fflush(stdin);
        printf("\nPlaca: ");
        scanf("%7s",&d[i].placa);
        fflush(stdin);
        printf("\nAno: ");
        scanf("%d",&d[i].ano);
        fflush(stdin);
    }
}
void props(){//questao 1
    int i;

    for(i=0;i<nmax;i++){
        if(d[i].ano>=1980){
            if(!strcmp(d[i].combustivel,"diesel")){
                printf("\nO proprietario '%s' possui um(a) %s %s do ano %d movido a diesel.\n",d[i].prop,d[i].modelo,d[i].cor,d[i].ano);
            }
        }
        else{
            continue;
        }
    }
}
void trocaprop(){//questao 2
    int i;
    char num[tam];

    printf("\nInsira o chassi do veiculo que deseja alterar o proprietario: \n");
    scanf("%19s",&num);
    for(i=0;i<nmax;i++){
        if(!strcmp(d[i].chassi,num)){
            fflush(stdin);
            printf("Insira o nome do novo proprietario: \n");
            scanf("%29[^\n]",&d[i].prop);
            break;
        }
        else{
            continue;
        }
    }
    printf("Novo proprietario do veiculo de chassi %s: '%s'.\n",d[i].chassi,d[i].prop);
}