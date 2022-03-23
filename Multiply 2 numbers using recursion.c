//Multiply 2 numbers using recursion
#include<stdio.h>


int main(){
	int n,m;
	long int res;
	long int multi(int,int);
	printf("Enter 2 numbers");
	scanf("%d%d",&n,&m);
	res=multi(n,m);
	printf("multiplication= %ld",res);
}int res;
long int multi(int n,int m)
{
res=n*m;
return res;
}
