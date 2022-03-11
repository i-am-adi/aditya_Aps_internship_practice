//wap to accept a amount and find number of notes required for a given amount of money
#include<stdio.h>
int main()
{int amt,note,n1;
printf("enter amount");
scanf("%d",&amt);
printf("enter note");
scanf("%d",&note);
switch(note)
{case 2000: n1=amt/2000;
           printf("\n2000--%d=%d",n1,2000*n1);
           amt=amt%2000;
           break;
case 500: n1=amt/500;
           printf("\n500--%d=%d",n1,500*n1);
           amt=amt%500;
           break;
case 200: n1=amt/200;
           printf("\n200--%d=%d",n1,200*n1);
           amt=amt%200;
           break;
case 100: n1=amt/100;
           printf("\n100--%d=%d",n1,100*n1);
           amt=amt%100;
           break;
case 50: n1=amt/50;
           printf("\n50--%d=%d",n1,50*n1);
           amt=amt%50;
           break;
case 20: n1=amt/20;
           printf("\n20--%d=%d",n1,20*n1);
           amt=amt%20;
           break;
case 10: n1=amt/10;
           printf("\n10--%d=%d",n1,10*n1);
           amt=amt%10;
           break;
}
}

