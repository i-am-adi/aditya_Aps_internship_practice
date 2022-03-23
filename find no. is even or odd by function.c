//find no. is even or odd by function
#include<stdio.h>
#include<conio.h>
int EvenOdd(int);

int main(){
int a,b;
 printf("enter the value\n");
 scanf("%d",&a);
 b=EvenOdd(a);


  
}
int EvenOdd(int a ){

	if(a%2==0)
	printf("%d is even",a);
else
	printf("%d is odd",a);
	return a;
	
}
