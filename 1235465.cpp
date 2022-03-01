#include<stdio.h>
int main()
{
	int no,n1,n2;
	printf("enter any 9 digit integer\n");
	scanf("%d",&no);
	n1=no/100000000;
	n2=no%10;
	no=n1*n2;
	printf("multiplication  of 1st and 9th digit is\n%d",no);
	return 0;
}
