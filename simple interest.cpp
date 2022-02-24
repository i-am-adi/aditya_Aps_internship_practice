#include<stdio.h>
int main()
{
	float a,p,r,t;
       printf("enter the value of principal amount, rate of interest and time\n");
       scanf("%f%f%f",&p,&r,&t);
       a=(1+r*t)*p;
       printf("The simple interest is:%f",a);
	return 0;
}
