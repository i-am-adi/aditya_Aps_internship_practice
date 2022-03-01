#include<stdio.h>
int main()
{
	float a,b,c,result;
	printf("enter the value of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
 result=(-b+b*b+c)/4*a;	
 printf("result is :%.2f",result);
	return 0 ;
}
