#include<stdio.h>
int main()
{
	int p1,p2,p3,total,avg;                        //declaration
	printf("p1=");                                 //message
	scanf("%d",&p1);                               //input
	printf("p2=");
	scanf("%d",&p2);	
	printf("p3=");
	scanf("%d",&p3);
	total=p1+p2+p3;                                //logic
	printf("%d+%d+%d=%d",p1,p2,p3,total);          //output 
	avg=total/3;                                   //logic
	printf("\n%d/3=%d",total,avg);                //output     \n =new line
	return 0;
}
