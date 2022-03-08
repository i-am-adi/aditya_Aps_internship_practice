//wap to multiplication no of digits using while loop
#include<stdio.h>
int main()
{
    int sum=0 ,no,rem;
	printf("enter number:");
	scanf("%d",&no);
	while(no>0){
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("the sum is %d",sum);
}
