//wap to check biggest no. among 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter any 3 numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		 big=a;
		 else
		 big=c;
	}
	else
	{
		if(b>c)
		big=b;
		else
		big=c;
	}
	printf("biggest no. is %d",big);
}
