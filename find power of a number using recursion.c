//find power of a number using recursion
#include<stdio.h>


int main(){
	int n,pow;
	long int res;
	long int power(int,int);
	printf("Enter no. and power");
	scanf("%d%d",&n,&pow);
	res=power(n,pow);
	printf("%d to the power %d is %ld",n,pow,res);
}int i=1;
long int sum=1;
long int power(int n,int pow)
{
	if(i<=pow){
	sum*=n;
	power(n,pow-1);
}
else 
return sum;
}
