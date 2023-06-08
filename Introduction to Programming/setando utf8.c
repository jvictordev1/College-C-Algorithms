#include<stdio.h>
#include<locale.h>
#include<windows.h>

int main()
{
	unsigned int CPAGE_UTF8 = 65001;
	unsigned int CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	
	printf("Já posso usar acentuação!");
	SetConsoleOutputCP(CPAGE_DEFAULT);
}
