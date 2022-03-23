//swap 2 numbers using function
#include<stdio.h>
int swap(int,int);

int main(){
int a,b;
 printf("enter the 2 values\n");
 scanf("%d%d",&a,&b);
 printf("\n before swaping       %d   %d",a,b);
swap(a,b);

  
}
int swap(int a,int b ){
   int temp;
temp=a;
a=b;
b=temp;
printf("\n after swaping        %d   %d",a,b);
	
}
