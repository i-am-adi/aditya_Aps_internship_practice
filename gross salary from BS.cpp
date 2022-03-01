#include<stdio.h>
int main()
{
	float BS, HRA ,DA, TA,GS;
	printf("\n Enter the basic salary :");
	scanf("%f",&BS);
	HRA=BS*0.60;
	DA=BS*0.50;
	TA=BS*0.40;
	GS=HRA+DA+TA+BS;
	printf("\n the gross salary is: %2f",GS);
	printf("\n the gross salary is: %f",GS);
	return 0;
}
