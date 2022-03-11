//wap to print sum of numbers of any number using for loop
#include<stdio.h>
int main()
{
	int sum=0,rem,n;
	printf("enter number: ");
	scanf("%d",&n);
	for(;n>0;n/=10){                        //n=n/10
	 rem=n%10;
    sum+=rem;
	  
	}
		printf("sum=%d",sum);

	
}
