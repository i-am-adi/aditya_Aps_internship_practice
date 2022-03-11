//wap to find the sum of complex div factorial series using for loop
#include<stdio.h>
int main()
{
	int x,n,i, sum=1;
	printf("enter number and range:\n ");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;++i){ 
	 int fact=1;
	n=i;
	if(n>0)
	{ 
		fact*=n;
		n--;}				                      
	
    sum+=pow(x,i)/fact;
	}
	printf("sum=%d",sum);


	
}
