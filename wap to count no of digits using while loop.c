//wap to count no of digits using while loop
#include<stdio.h>
int main()
{
    int count=0 ,no;
	printf("enter number:");
	scanf("%d",&no);
	while(no>0){
		no=no/10;
		++count;
	}
	printf("the count value is %d",count);
}
