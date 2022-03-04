//wap to find the grade of student when 4 sub marks are given
#include<stdio.h>
int main()
{
	float a,b,c,d,total,per;
	char grade;
	printf("enter the marks of 4 paper :\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	total=a+b+c+d;
	per=total/4.0;
	if(per>=90)
	 grade='A';
	else if(per>=80 && per<90)
	 grade='B';
	else if(per>=70 && per<80)
	 grade='C';
	else if(per>=60 && per<70)
	 grade='D';
	else if(per>=50 && per<60)
	 grade='E';
	else
	printf("fail. \n");
	printf("percentage is %f \n grade is %c",per,grade);
}

