//wap to check smallest no. among 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c,small;
	printf("enter any 3 numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		 small=a;
		 else
		 small=c;
	}
	else
	{
		if(b<c)
		small=b;
		else
		small=c;
	}
	printf("smallest no. is %d",small);
}
