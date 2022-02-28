#include <stdio.h>
int main(){
	
float feet,inch,cm;
printf("Enter height in feet :\n");
scanf("%f",&feet);
inch=feet*12;
printf("inch:\n%.2f",inch);
cm=inch*2.54;
printf("\ncm:\n%.2f",cm);
	return 0;

}
