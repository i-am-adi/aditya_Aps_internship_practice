#include<stdio.h>
int main()
{
	int no,n1,n2;
	printf("enter any 5 digit integer\n");
	scanf("%d",&no);
	n1=no/10000;
	n2=no%10;
	no=n1+n2;
	printf("sum of 1st and 5th digit is\n%d",no);
	return 0;
}
