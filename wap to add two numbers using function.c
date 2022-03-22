//wap to add two numbers using function
#include<stdio.h>
int add(int,int);

int main(){
int a,b,p;
 printf("enter the value of a and b\n");
 scanf("%d%d",&a,&b);
 p=add(a,b);
 
 printf("Addition = %d",p);
  
}
int add(int x,int y ){
	int sum;
	sum=x+y;
	return sum;
}
