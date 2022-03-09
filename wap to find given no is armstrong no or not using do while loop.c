//wap to find given no is armstrong no or not using do while loop
#include<stdio.h>
int main()
{
	int no,a=0,rem,num;
	printf("enter any no:");
	scanf("%d",&no);
	num=no;
	do{rem=no%10;
	   a=a+(rem*rem*rem);
	   no=no/10;
	}while(no>0);
	if(num==a)
	   printf("%d is a Armstrong number",num);
	else
	printf("%d is not a Armstrong number",num);
}

