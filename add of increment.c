#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the value of a:");
	scanf("%d",&a);
	
     i=a++ + ++a + a++ + a + ++a + a++ + ++a;
	printf("\n%d",i);
}
