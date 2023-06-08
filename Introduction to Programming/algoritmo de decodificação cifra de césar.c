#include<stdio.h>//diretivas de pr� processador e define
#include<string.h>
#define tam 50

char decodifica(char palavra[tam],int desloca);//referencia��o da fun��o que decodifica a palavra inserida
int main(){
	int i,j,casos,deslocaDir,*pd;//se��o de declara��o de variaveis
	char string[tam];
	
	printf("Insira a quantidade de casos a serem testados:\n");
	scanf("%d",&casos);// armazenando a quantidade de casos na variavel casos
	
	for(i=0,pd=&deslocaDir;i<casos;i++){//la�o de repetica��o que ir� controlar ao funcionamento geral do programa.
		printf("\nInsira a palavra (em caixa alta) codificada na Cifra de Cesar:\n");
		scanf("%50s",string);//armazenando a string inserida pelo usuario no vetor de caracteres com identificador string.
		setbuf(stdin,NULL);//realizando a limpeza do buffer para evitar a entrada de valores no segundo scanf
		
		printf("\nInsira a quantidade de deslocamentos a direita:\n");
		scanf("%d",pd);//utilizando o endere�o de memoria presente na variavel pd para atribuir um conte�do na �rea da mesma.
		
		decodifica(string,*pd);//chamada a fun��o que decodifica a palavra, recebendo os valores da variavel string e do conte�do do endere�o de memoria do ponteiro.
		
		printf("\nA palavra decodificada eh:'%s'\n",string);//imprimimos a palavra descodificada na tela
	}
}
char decodifica(char palavra[tam],int desloca){	//elabora��o da fun��o que descriptografa a palavra inserida pelo usuario
	int j,*dsl;	//se��o de declara��o das variaveis da fun��o decodifica
	const int alfa=26;
	
	dsl=&desloca;//atribuindo o endere�o de memoria da variavel desloca para o ponteiro dsl
	for(j=0;j<strlen(palavra);j++){	//la�o de repeti��o que ira percorrer todo o vetor de caracteres e trocar suas letras de acordo com o modo de criptografia
		if((palavra[j]-*dsl)<'A'){	//Verificamos se ao subtrairmos o valor da letra pela quantidade de deslocamentos obteremos um valor menor que o valor da letra 'A'
									//na tabela ascii 2, caso seja menor entramos no if, caso contrario passamos pelo if e entramos no else.
			palavra[j]=(palavra[j]-*dsl)+alfa;//Entrando no if iremos subtrair o valor da letra na posi��o j do vetor pela quantidade de deslocamentos
											  //obtendo assim o caractere que esse valor referencia na tabela ascii 2, e apos isso somamos com
										      //o valor da constante inteira alfa, retornando para a faixa de valores que representam letras na tabela ascii 2
											  //e apresentando a letra representada antes do processo de criptografia.
		}
		else{
			palavra[j]-=*dsl;//Caso contr�rio, subtraimos o valor da letra na posi��o j pela quantidade de deslocamentos e colocamos esse valor na mesma posi��o j,
							 //representando assim a letra representada antes do processo de criptografia, utilizando a tabela ascii 2.
		}
	}
}
