//discount in cost price for student or not a student
#include<stdio.h>

int main()
{ int a,b,sum;
     printf("enter cost price");
     scanf("%d",&a);
     printf("1.student\n2.Not a student");
     scanf("%d",&b);
	 switch(b){
     	case 1:
		 if(a>500){
		 
     	       sum=a-a/10;
     	       printf("cost price with discount  is %d",sum);}
     	       else
     	         {
				  sum=a-a/20;
     	       printf("cost price with  discount is %d",sum);}
     	       break;
     	case 2:
		       if(a>500){
			   
     	       sum=a-a*8/100;
     	       printf("cost price with  discount is %d",sum);}
     	       else{
				
     	         sum=a-a/50;
     	       printf("cost price with  discount is %d",sum);
                 }     
	 }
		}
	
