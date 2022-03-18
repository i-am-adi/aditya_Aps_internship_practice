//using arra print a program matrix with add of rows
#include<stdio.h>
int main()
{
	int arr[100][100],i,j,a,b,sum=0;
	printf("enter rows and column:\n");
	scanf("%d%d",&a,&b);
	printf("enter data of matrix\n");
	for(i=0;i<a;++i)
	{   
		for(j=0;j<b;++j)
		{
			scanf("%d",&arr[i][j]);
			
		
		}
	}
	printf("\nMatrix is :\n");
	for(i=0;i<a;++i)
	{
		for(j=0;j<b;++j)
		{
			printf("%d ",arr[i][j]);
			sum+=arr[i][j];
		   	
		} printf("%d",sum);
        	printf("\n");
	}	

}

