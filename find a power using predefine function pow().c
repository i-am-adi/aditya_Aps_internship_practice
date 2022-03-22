//find a power using predefine function pow()
#include<stdio.h>
#include<math.h>
int main()
{double a,b,p;
 printf("enter the base:");
 scanf("%lf",&a);
 printf("enter the exponent:");
 scanf("%lf",&b);
 p=pow(a,b);
 printf(" %.2lf^%.2lf = %.2lf",a,b,p);
  
}
