#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define tam 16

double fatorial(int q);
int main(){
	char letras[tam],*plet=&letras[0];
	double fat;
	
	do{
		scanf("%15s",plet);
		
		if(*plet!='0'){
			fat=fatorial(strlen(plet));
			printf("%.0lf\n",fat);
		}
		else{
			exit(0);
		}
	}while(letras[0]!='0');
}
double fatorial(int q){
  double fat;
  
	if (q==1){
		return(1);
	}
	else{
    	fat=q*fatorial(q-1);
    	return(fat);
	}
}
