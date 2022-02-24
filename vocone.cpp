#include<stdio.h>
int main()
{
	int r,h,volume;                                        //declarstion
	printf("radius:");                                     //message
	scanf("%d",&r);                                       //input
	printf("height:");
	scanf("%d",&h);
	
	volume=r*r*h*1/3*3.141;                               //logic
	printf("volume of cone : %d",volume);        //output
	return 0;
}
