//wap to find the largest number among 5 numbers
#include<stdio.h>
int main()
{
	int a,b,c,d,e,max;
	printf("\n enter 5 numbers :\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	max=a;
	if(max<b)
	 max=b;
	if(max<c)
	 max=c;
	 if(max<d)
	 max=d;
	if(max<e)
	 max=e;
	printf("\n the largest no. is:%d",max);
	
}
