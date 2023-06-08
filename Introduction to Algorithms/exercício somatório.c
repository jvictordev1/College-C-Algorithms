#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int x,den=1;
    double res=0;

    setlocale(LC_CTYPE, "Portuguese_Brazil");

    printf("Insira um valor natural para a variável x:\n");
    scanf("%d",&x);
	
    while(den<=25){
    	/* Se a divisão do valor do denominador(den) por 2 tiver resto 0, então o denominador(den) é par, logo,
		subtrairemos x^2/den no somatório. */
        if(den%2==0){
            res+=-(pow(x,2)/den);
        }
        /* Se a divisão do valor do denominador(den) por 2 tiver resto diferente de 0, então o denominador(den) é ímpar,
		 logo somaremos x^2/den no somatório */
        else{
            res+=(pow(x,2)/den);
        }
        den++;
    }
    /* Resultado final do somatório de x^2/1 - x^2/2 + x^2/3 - x^2/4 + ... + x^2/25 */
    printf("O resultado do somatório será:%.5lf\n",res);
    system("PAUSE");
    return;
}
