#include<stdio.h>
int main()
{
	int l,b,area;           //declaration
	printf("length:");      //massage
	scanf("%d",&l);
	printf("breath:");
	scanf("%d",&b);         //input
	area=l*b;               //logic
	printf("%d*%d=%d",l,b,area);
	return 0;
	
}

