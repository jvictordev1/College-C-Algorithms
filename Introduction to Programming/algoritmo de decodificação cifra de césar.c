#include<stdio.h>//diretivas de pré processador e define
#include<string.h>
#define tam 50

char decodifica(char palavra[tam],int desloca);//referenciação da função que decodifica a palavra inserida
int main(){
	int i,j,casos,deslocaDir,*pd;//seção de declaração de variaveis
	char string[tam];
	
	printf("Insira a quantidade de casos a serem testados:\n");
	scanf("%d",&casos);// armazenando a quantidade de casos na variavel casos
	
	for(i=0,pd=&deslocaDir;i<casos;i++){//laço de repeticação que irá controlar ao funcionamento geral do programa.
		printf("\nInsira a palavra (em caixa alta) codificada na Cifra de Cesar:\n");
		scanf("%50s",string);//armazenando a string inserida pelo usuario no vetor de caracteres com identificador string.
		setbuf(stdin,NULL);//realizando a limpeza do buffer para evitar a entrada de valores no segundo scanf
		
		printf("\nInsira a quantidade de deslocamentos a direita:\n");
		scanf("%d",pd);//utilizando o endereço de memoria presente na variavel pd para atribuir um conteúdo na área da mesma.
		
		decodifica(string,*pd);//chamada a função que decodifica a palavra, recebendo os valores da variavel string e do conteúdo do endereço de memoria do ponteiro.
		
		printf("\nA palavra decodificada eh:'%s'\n",string);//imprimimos a palavra descodificada na tela
	}
}
char decodifica(char palavra[tam],int desloca){	//elaboração da função que descriptografa a palavra inserida pelo usuario
	int j,*dsl;	//seção de declaração das variaveis da função decodifica
	const int alfa=26;
	
	dsl=&desloca;//atribuindo o endereço de memoria da variavel desloca para o ponteiro dsl
	for(j=0;j<strlen(palavra);j++){	//laço de repetição que ira percorrer todo o vetor de caracteres e trocar suas letras de acordo com o modo de criptografia
		if((palavra[j]-*dsl)<'A'){	//Verificamos se ao subtrairmos o valor da letra pela quantidade de deslocamentos obteremos um valor menor que o valor da letra 'A'
									//na tabela ascii 2, caso seja menor entramos no if, caso contrario passamos pelo if e entramos no else.
			palavra[j]=(palavra[j]-*dsl)+alfa;//Entrando no if iremos subtrair o valor da letra na posição j do vetor pela quantidade de deslocamentos
											  //obtendo assim o caractere que esse valor referencia na tabela ascii 2, e apos isso somamos com
										      //o valor da constante inteira alfa, retornando para a faixa de valores que representam letras na tabela ascii 2
											  //e apresentando a letra representada antes do processo de criptografia.
		}
		else{
			palavra[j]-=*dsl;//Caso contrário, subtraimos o valor da letra na posição j pela quantidade de deslocamentos e colocamos esse valor na mesma posição j,
							 //representando assim a letra representada antes do processo de criptografia, utilizando a tabela ascii 2.
		}
	}
}
