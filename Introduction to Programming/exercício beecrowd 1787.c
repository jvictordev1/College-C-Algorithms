#include<stdio.h>
#define lin 2
#define col 3

int valores[lin][col],*pvet=&valores[0][0];

void zeramatriz();
void pontuacao();
void vencedor();

int main(){
	int round,*pround,n,m;
	
	pround=&round;
	do{
		zeramatriz();
		scanf("%d",pround);
		
		for(n=0;n<*pround;n++){
			scanf("%d %d %d",pvet,pvet+1,pvet+2);
			pontuacao();
		}
		if(*pround){
			vencedor();
		}
	}while(*pround!=0);
}
void zeramatriz(){
	int i;
	
	for(i=0;i<lin*col;i++){
		*(pvet+i)=0;
	}
}
void pontuacao(){
	int i,j,aux;
	
	for(i=0,aux=0;i<col;i++){
		if(!i){
			aux=*(pvet+i);
		}
		else{
			if(aux<*(pvet+i)){
				aux=*(pvet+i);
			}
		}
	}
	for(i=0,j=3;i<col;i++,j++){
		if(*(pvet+i)&&!(*(pvet+i)&(*(pvet+i)-1))){
			if(*(pvet+i)==aux){
				*(pvet+j)+=2;
			}
			else{
				*(pvet+j)+=1;
			}
		}
		else{
			continue;
		}
	}
}
void vencedor(){
	int i,maispontos,aux;
	
	for(i=3,maispontos=0,aux=0;i<lin*col;i++){
		if(i==3){
			maispontos=i;
			aux=*(pvet+i);
		}
		else{
			if(aux<*(pvet+i)){
				maispontos=i;
				aux=*(pvet+i);
			}
			else{
				if(aux==*(pvet+i)){
					maispontos=0;	
				}
			}
		}
	}
	for(i=3;i<lin*col;i++){
		if(maispontos){
			if(maispontos==i){
				printf("Uilton\n");
				break;
			}
			else{
				if(maispontos==i+1){
					printf("Rita\n");
					break;
				}
				else{
					printf("Ingred\n");
					break;
				}
			}
		}
		else{
			printf("URI\n");
			break;
		}
	}
}
