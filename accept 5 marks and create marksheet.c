#include<stdio.h>
int main()
{
	int a,b,c,d,e,total;
	float per;
	printf("enter the marks of 5 subjects\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	printf("_____________________________________________________________\n");
	printf("college name:PCE\nname:aditya\trollno:115599\nenroll\n");
	printf("_____________________________________________________________\n");
	printf("subjects   |\ttotal marks  |\tobtained marks\n");
	printf("_____________________________________________________________\n");
	printf("maths      |\t100          |       \t");
	printf("%d\n",a);
		printf("computer   |\t100          |       \t");
	printf("%d\n",b);
		printf("english    |\t100          |        \t");
	printf("%d\n",c);
		printf("french     |\t100          |         \t");
	printf("%d\n",d);
		printf("python     |\t100          |        \t");
	printf("%d\n",e); 
		printf("_____________________________________________________________\n");
	
	printf("\t   | total=500  \t");
	printf("|  %d\n",total);
		printf("_____________________________________________________________\n");
		per=total/5;
		printf("percentage=%f",per);
	return 0;
}
