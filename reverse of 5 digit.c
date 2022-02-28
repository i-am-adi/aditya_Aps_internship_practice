#include<stdio.h>
int main()
{int num, a,b,c,d,e,reverse;
	printf("\n Enter the value of 5 digit no:");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;	
	d=num%10;
	num=num/10;	
	e=num%10;
	num=num/10;
	reverse=(a*10000+b*1000+c*100+d*10+e);
	printf("\nreverse is:\n%d",reverse);
	return 0;
}
