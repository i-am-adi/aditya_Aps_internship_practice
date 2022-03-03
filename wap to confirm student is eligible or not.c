
//Wap to accept 3 paper marks,find total and per.if per>62 and gender is female , she can take admission and if per>85 and gender is male ,he can take admission
#include<stdio.h>
int main()
{int per;
char gender;
printf("enter the per:\n");
scanf("%d",&per);
printf("gender(m/f):\n");
scanf("%c",&gender);
scanf("%c",&gender);

if(per>=62 && gender=='f')
{

	printf("you can take admission.");
}
else
{
	printf("you cannot take admission.");
}
printf("\nenter the per:\n");
scanf("%d",&per);
printf("gender(m/f):\n");
scanf("%c",&gender);
scanf("%c",&gender);

if(per>=85 && gender=='m')
{

	printf("you can take admission.");
}
else
{
	printf("you cannot take admission.");
}





} 
