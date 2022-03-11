//wap to print fibonacci series using for loop
#include<stdio.h>
int main()
{
	int f0=0,f1=1,f2,n,i;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=3;i<=n;++i){                       
	
    f2=f0+f1;
    printf("%d\t",f2);
    f0=f1;
    f1=f2;
	}


	
}
