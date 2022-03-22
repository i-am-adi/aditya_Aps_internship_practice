//pointer algorithm 1
#include<stdio.h>
int main()
{
	int a=98;
	char*ptr;
	ptr=(char*)&a;
	printf("%c",*ptr);
}
