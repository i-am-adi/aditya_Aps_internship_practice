#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("\nbefore the interchange a=%d \t b=%d ",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter the interchange a=%d \t b=%d",a,b);
	return 0;}
