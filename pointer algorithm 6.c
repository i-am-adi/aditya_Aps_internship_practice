//pointer algorithm 6
#include<stdio.h>
#include<string.h>
int main()
{
	char a=12,b=6;
	char*p=&a,*q=&b;
	printf("%d\n",p);
	printf("%d\n",q);
	printf("%d",p-q);
}
