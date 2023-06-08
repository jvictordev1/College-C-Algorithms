#include<stdio.h>
#include<math.h>
#define max 100

double vetor[max],media;

void inicializavetor();
void imprimemedia();
void desviopadrao();
void subszero();

int main(){
	inicializavetor();
	imprimemedia();
	desviopadrao();
	subszero();
}
void inicializavetor(){
	int i;
	
	for(i=0;i<max;i++){
		printf("Insira um valor para o vetor[%d]:\n",i+1);
		scanf("%lf",&vetor[i]);
	}
}
void imprimemedia(){
	int i;
	
	for(i=0,media=0;i<max;i++){
		media+=vetor[i];
		if(i+1==max){
			media=media/max;
			break;
		}
	}
	printf("\nMEDIA: %.2lf\n\n",media);
}
void desviopadrao(){
	int i;
	double dp;
	
	for(i=0,dp=0;i<max;i++){
		dp+=pow(vetor[i]-media,2);
	}
	dp=dp/max;
	printf("DESVIO PADRAO: %.2lf\n\n",sqrt(dp));
}
void subszero(){
	int i,j,m=0,aux[max/2];
	
	for(i=0;i<max;i++){
		for(j=i+1;j<max;j++){
			if(vetor[i]==vetor[j]){
				aux[m] = vetor[i];
				m++;
			}
		}
	}
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(vetor[i]==aux[j]){
				vetor[i]=0;
			}
		}
	}
	for(i=0;i<max;i++){
		if(!i){
			printf("| %.2lf ",vetor[i]);
		}
		else{
			if(i+1==max){
				printf("%.2lf |",vetor[i]);
			}
			else{
				printf("%.2lf ",vetor[i]);
			}
		}
	}
}
