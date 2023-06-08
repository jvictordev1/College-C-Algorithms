#include<stdio.h>
#define max 21
int main(){
	char string1[max],string2[max];
	int i;
	
	for(i=0;i<2;i++){
		if(!i){
			printf("Insira a %d string:\n",i+1);
			scanf("%20[^\n]",string1);
		}
		else{
			printf("Insira a %d string:\n",i+1);
			setbuf(stdin,NULL);
			scanf("%20[^\n]",string1);
		}
	}
	for(i=0;i<max;i++){
		string2[i]=string1[i];
		if(!string1[i]){
			break;
		}
	}
	printf("%s\n",string2);
}
