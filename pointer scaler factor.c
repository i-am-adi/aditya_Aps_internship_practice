//pointer scaler factor
#include<stdio.h>

int main()
{ int a=10,*i=&a;
  char b='n',*c=&b;
  float d=5.5,*f=&d;
  printf("value of a=address of i =%u\n",i);
  printf("value of b=address of c =%u\n",c);
  printf("value of d=address of f =%u\n",f);
  i++;c++;f++;
  printf("Now address i is=%u\n",i);
    printf("Now address c is=%u\n",c);
	 printf("Now address f is=%u\n",f);  
		}
	
