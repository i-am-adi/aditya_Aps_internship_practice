#include<stdio.h>
   int main()
{
    int s1,s2,s3,s4,total;
	float per;
	printf("enter 4 paper marks: ");
	scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
	total=s1+s2+s3+s4;
	printf("\ntotal is : %d",total);
	per=total/4;
	printf("\npercent is:%f",per);
	return 0;
}
