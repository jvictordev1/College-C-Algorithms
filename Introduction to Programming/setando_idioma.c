#include<locale.h>
#include<stdio.h>

int main()
{
    setlocale(LC_CTYPE, "Portuguese_Brazil");

    printf("Ol� Mundo! Agora posso usar acentua��o e tamb�m �!");
}
