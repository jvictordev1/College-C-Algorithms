#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main()
{
	unsigned int CPAGE_UTF8 = 65001;
	unsigned int CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	
	printf("J� posso usar acentua��o!");
	SetConsoleOutputCP(CPAGE_DEFAULT);
}
