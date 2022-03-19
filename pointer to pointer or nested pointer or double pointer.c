//pointer to pointer or nested pointer or double pointer
#include<stdio.h>

int main()
{ int a=10;
  int *b=&a;
  int **c=&b;
  printf("address of a is=%u\n",&a);
  printf("address of b is=%u\n",&b);
  printf("address of c is=%u\n",&c);
  printf("value of a is=%d\n",a);
  printf("value of b is=%d\n",b);
  printf("value of c is=%d\n",c);   
  printf("value of a is=%d\n",*b);
  printf("value of b is=%d\n",*(&a));
  printf("value of c is=%d",**c);   
		}
	
