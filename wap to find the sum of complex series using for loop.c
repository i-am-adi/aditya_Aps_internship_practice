//wap to find the sum of 1+x/1+x^2/2+----+x^n/n series using for loop
#include<stdio.h>
int main()
{
	int x,n,i;
	float sum=1;
	printf("enter number and range:\n ");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;++i){                       
	
    sum+=pow(x,i)/i;
	}
	printf("sum=%f",sum);


	
}
