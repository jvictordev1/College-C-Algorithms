#include <stdio.h>
#include <locale.h>

int main(){
    char s[100];
    int num_car=0;

    setlocale(LC_CTYPE,"Portuguese_Brazil");
    
    printf("Insira uma string:\n");
    scanf("%s",&s);

    while(s[num_car]!='\0'){
        num_car++;
    }
    printf("A quantidade de caracteres existentes é:%d",num_car);
}