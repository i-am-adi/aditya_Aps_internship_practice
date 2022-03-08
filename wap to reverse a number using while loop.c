//wap to reverse a number using while loop
#include<stdio.h>
int main()
{
	long int rev=0 ,no,rem;
	printf("enter number:");
	scanf("%ld",&no);
	while(no>0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("the reverse value is %ld",rev);
}.

