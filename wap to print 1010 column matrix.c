//wap to print 1010 column matrix
#include<stdio.h>
int main()
{
	int a,b,i,j;
	printf("enter the value of i and j:\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
		if(i%2==0)
		printf("0");
		else
		printf("1");
		}
		printf("\n");
	}
}

