//wap to accept a year to check it is leap year or not by century and non century concept
#include<stdio.h>
int main ()
{
	int y;
	printf("enter any year:\n");
	scanf("%d",&y);
	if(y%100!=0)
	{
		if(y%4==0)
		printf("\n%d is a leap year.",y);
		else
		printf("\n%d is not a leap year.",y);
	}
	else{
		if(y%400==0)
		printf("%d is a century leap year.",y);
		else
		printf("%d is not a century leap year.",y);
	}
}
