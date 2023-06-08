#include<locale.h>
#include<stdio.h>

int main()
{
    setlocale(LC_CTYPE, "Portuguese_Brazil");

    printf("Olá Mundo! Agora posso usar acentuação e também Ç!");
}
