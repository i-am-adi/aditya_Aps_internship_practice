//find area and circum. using function
#include<stdio.h>
#define pi 3.141
int calc(float,float*,float*);

int main(){
float a,area,circum;
 printf("enter the radius\n");
 scanf("%f",&a);
 calc(a,&area,&circum);
  printf("area=%.2f\ncircumfrance=%.2f",area,circum);
  
}
int calc(float a, float*area,float*circum){

    *area=pi*a*a;
    *circum=2*pi*a;
	
	
}
