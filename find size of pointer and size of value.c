//find size of pointer and size of value
#include<stdio.h>

int main()
{ int a=10,*i=&a;
  char b='n',*c=&b;
  float d=5.5,*f=&d;
  printf("sizeof(i)=%u,sizeof(*i)=%u\n",sizeof(i),sizeof(*i));
   printf("sizeof(c)=%u,sizeof(*c)=%u\n",sizeof(c),sizeof(*c));
    printf("sizeof(f)=%u,sizeof(*f)=%u\n",sizeof(f),sizeof(*f));
 
  
		}
	       
