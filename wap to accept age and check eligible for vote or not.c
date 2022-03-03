//wap to accept age and check eligible for vote or not
#include<stdio.h>
int main()
{ int age;
printf("\n enter age:");
scanf("%d",&age);
if(age <=18)
  printf("\n%d you are not eligible for vote ",age);
  
  if(age>=18)
  printf("\n%d you are  eligible for vote ",age);
}
