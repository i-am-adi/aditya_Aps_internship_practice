//wap to print electric bill
#include <stdio.h>
int main()
{
	float u,d;
	double e,E;               //e=actual ele bill,E=total ele bill
	printf("Enter units:");
	scanf("%f",&u);
	if(u>0 && 100>=u){
		e=u*3.5;
		d=e*1.00;
		E=e-d;
		}
    else if(u>100 && 200>=u){
    	e=u*4.5;
    	d=e*0.75;
    	E=e-d;
	    }
	else if(u>200 && 300>=u){
		e=u*5;
		d=e*0.50;
		E=e-d;
	    }
	else{
		e=u*6;
		E=e+300;
		}
	printf("No of units\t\t:%.2f\n",u);
	printf("total discount\t\t:%.2f\n",d);
	printf("Actual electric bill\t\t:%.2lf\n",e);
	printf("total electric bill\t\t:%.2lf",E);
}
