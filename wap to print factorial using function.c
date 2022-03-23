//wap to print factorial using function
#include<stdio.h>
int factorial(int);

int main()
{
	int a,fact;
 	printf("enter the value\n");
 	scanf("%d",&a);
	fact=factorial(a);
  	
  
}
int factorial(int a ){
		int fact=1,i;
	for(i=1;i<=a;++i)
	{
		fact*=i;
		}printf("%d",fact);
    
	
}
