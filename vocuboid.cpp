#include<stdio.h>
int main()
{
	int l,b,h,volume;    //declaration
	printf("length:");
	scanf("%d",&l);
	printf("breath:");
	scanf("%d",&b);
	printf("height:");   //message
	scanf("%d",&h);      //
	
	volume=l*b*h;       // logic
	
	printf("%d*%d*%d=%d",l,b,h,volume);
	
return 0;
	
}
