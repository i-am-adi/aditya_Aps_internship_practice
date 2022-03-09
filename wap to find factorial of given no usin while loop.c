//wap to find factorial of given no usin while loop
#include<stdio.h>
int main()
{
    int fact=1 ,no;
	printf("enter number:");
	scanf("%d",&no);
	while(no>0){
		fact=fact*no;
		--no;
	}
	printf("the factorial is is %d",fact);
}
