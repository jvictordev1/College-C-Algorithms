#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int x,den=1;
    double res=0;

    setlocale(LC_CTYPE, "Portuguese_Brazil");

    printf("Insira um valor natural para a vari�vel x:\n");
    scanf("%d",&x);
	
    while(den<=25){
    	/* Se a divis�o do valor do denominador(den) por 2 tiver resto 0, ent�o o denominador(den) � par, logo,
		subtrairemos x^2/den no somat�rio. */
        if(den%2==0){
            res+=-(pow(x,2)/den);
        }
        /* Se a divis�o do valor do denominador(den) por 2 tiver resto diferente de 0, ent�o o denominador(den) � �mpar,
		 logo somaremos x^2/den no somat�rio */
        else{
            res+=(pow(x,2)/den);
        }
        den++;
    }
    /* Resultado final do somat�rio de x^2/1 - x^2/2 + x^2/3 - x^2/4 + ... + x^2/25 */
    printf("O resultado do somat�rio ser�:%.5lf\n",res);
    system("PAUSE");
    return;
}
