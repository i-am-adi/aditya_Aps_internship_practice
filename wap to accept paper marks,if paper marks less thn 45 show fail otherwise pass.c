//wap to accept paper marks,if paper marks less thn 45 show fail otherwise pass
#include<stdio.h>
int main()
{ int a,b,c;
printf("Enter marks of 3 papers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>=45 && b>=45 && c>=45)
{
	printf("Pass.");
}
else
{
	printf("Fail.");
}
}
