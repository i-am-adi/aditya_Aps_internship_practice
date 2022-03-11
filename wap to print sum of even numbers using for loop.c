//wap to print sum of even numbers using for loop
#include<stdio.h>
int main()
{
	int sum,i,n;
	printf("enter range ");
	scanf("%d",&n);
	for(i=1;i<=n;++i){
      if(i%2==0){
      	sum+=i;
	  }
	  
	}
		printf("sum=%d",sum);

	
}
