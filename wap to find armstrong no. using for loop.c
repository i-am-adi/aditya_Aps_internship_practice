//wap to find armstrong no. using for loop
#include<stdio.h>
int main()
{
	int i,sum=0,rem,no, n;
	printf("enter range:\n ");
	scanf("%d",&no);
	for(i=1;i<=no;++i){ 
	n=i;
	sum=0;
    while(n>0){
    rem=n%10;
	 sum+=(rem*rem*rem);
	 n/=10;
	}
	 if(i==sum){
	printf("%d is a armstrong\n",i);

}
	
}

	
}
