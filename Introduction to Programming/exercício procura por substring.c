#include<stdio.h>
#include<string.h>

int main(){
	char str1[100],str2[100],*p;
	int i;
	
	scanf("%99[^\n]",str1);
	setbuf(stdin,NULL);
	scanf("%99[^\n]",str2);
	
	p=strstr(str1,str2);
	
	if(!p){
		printf("0\n");
	}
	else{
		for(i=0,p=strchr(str1,str2[0]);str1[i]!=*p;i++);
		printf("%d\n",i+1);
	}
}
