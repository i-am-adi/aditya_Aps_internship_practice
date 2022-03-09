//wap to find no. is a palindrome or not usind do while loop
#include<stdio.h>
int main()
{
	int num,no,rev=0,rem;
	printf("enter any no:");
	scanf("%d",&no);
     num=no;
	do{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}while(no>0);
	if(num==rev)
	     printf("%d is a polidrome",num);
    else
    	printf("%d is not a polidrome",rev);
	
}
