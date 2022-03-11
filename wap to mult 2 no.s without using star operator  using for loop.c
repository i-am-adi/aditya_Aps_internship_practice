//wap to mult 2 no.s without using star operator  using for loop
#include<stdio.h>
int main()
{
	int a,b,i,res=0;
	printf("enter  two numbers:\n ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;++i){ 
	 res+=a;
	
}
printf("res:%d",res);

	
}
