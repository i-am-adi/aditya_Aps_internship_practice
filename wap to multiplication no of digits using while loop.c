//wap to multiplication no of digits using while loop
#include<stdio.h>
int main()
{
    int mult=1 ,no,rem;
	printf("enter number:");
	scanf("%d",&no);
	while(no>0){
		rem=no%10;
		mult=mult*rem;
		no=no/10;
	}
	printf("the multiplication is %d",mult);
}
