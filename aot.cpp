#include<stdio.h>
int main()
{
	int b,h,area;     //declaration
	printf("breath:");//message
	scanf("%d",&b);   // input
	printf("height:");
	scanf("%d",&h);
	
	area=0.5*b*h;  //logic
	printf("0.5*%d*%d=%d",b,h,area);
	return 0;
	
}
