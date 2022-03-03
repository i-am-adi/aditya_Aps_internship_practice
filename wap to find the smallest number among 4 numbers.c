//wap to find the smallest number among 4 numbers
#include<stdio.h>
int main()
{
	int a,b,c,d,min;
	printf("\n enter 4 numbers :\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	min=a;
	if(min>b)
	 min=b;
	if(min>c)
	 min=c;
	 if(min>d)
	 min=d;
	printf("\n the smallest no. is:%d",min);
	
}
