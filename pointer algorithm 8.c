//pointer algorithm 8
#include<stdio.h>
int main()
{int a=1;
 int *ptr;
 ptr=&a;
 printf("%u\n%u",*&ptr,&*ptr);
}
