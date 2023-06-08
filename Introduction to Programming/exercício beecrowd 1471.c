#include<stdio.h>
#include<string.h>
#define tam 1000

int num[tam],*pnum=&num[0],irtn[tam],*prtn=&irtn[0];

void mergulhadores(int quant){
	int i;
	for(i=0;i<quant;i++){
		*(pnum+i)=i+1;
	}
}
int main(){
	int qmerg,qrtn,indrtn,i,j;
	char logico;
	
	while(scanf("%d %d",&qmerg,&qrtn)!=EOF){
		logico=0;
		memset(num,0,sizeof(num));
		memset(irtn,0,sizeof(irtn));
		mergulhadores(qmerg);
		
		if(qmerg==qrtn){
			logico=1;
		}
		if(logico){
			for(i=0;i<qrtn;i++){
				scanf("%d",&indrtn);
				*(prtn+indrtn)=indrtn;
			}
			printf("*\n");
		}
		else{
			for(i=0;i<qrtn;i++){
				scanf("%d",&indrtn);
				*(prtn+indrtn)=indrtn;
			}
			for(i=1;i<=qmerg;i++){
				if(*(prtn+i)==0){
					printf("%d ",i);
				}
			}
			printf("\n");
		}
	}
}
