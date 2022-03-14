//wap to print sum of rows in matrix
#include<stdio.h>
int main()
{
	int a,b,i,j,sum=0,n=0;
	printf("enter the value of columns ang rows:\n");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++)
	{
		sum=0;
		for(j=1;j<=b;j++)
		{printf("%d ",++n);
		sum+=n;
		}
		printf("\t--> %d",sum);
		printf("\n");
	}
}


