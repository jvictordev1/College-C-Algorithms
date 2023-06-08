#include<stdio.h>

int main(){
	int matriz[3][4],*pont,i;
	
	for(i=0,pont=&matriz[0][0];i<12;i++){
		*(pont++)=i+1;
	}
	for(i=0,pont=&matriz[0][0];i<12;i++){
		if(!(i%4)){
			printf("| %02d ",*(pont+i));
		}
		else{
			if(i%4==4-1){
				printf(" %02d |\n",*(pont+i));
			}
			else{
				printf(" %02d ",*(pont+i));
			}
		}
	}
}
