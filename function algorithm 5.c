//function algorithm 5
#include<stdio.h>
#include<stdlib.h>
int*fun();

int main(){
int *ptr=fun();
printf(" %d",*ptr);
}
 int*fun()
{
int*ptr1=(int*)malloc(sizeof(int));
*ptr1=25;
return ptr1;
}
