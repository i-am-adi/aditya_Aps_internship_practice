//wap to accept 2 integers and perform arithmatic operations
#include<stdio.h>
#include<process.h>
int main()
{int a,b,ch,res;
printf("enter any two integers:");
scanf("%d%d",&a,&b);
printf("\n1.add\n2.sub\n3.mult\n4.div\n5 exit\n");
printf("select number");
scanf("%d",&ch);
switch(ch){
	case 1:
		printf("\nadd=%d",a+b);
		break;
	case 2:
		printf("\nsub=%d\n",a-b);
		break;
	case 3:
		printf("\nmult=%d",a*b);
		break;
	case 4:
		printf("\ndiv=%d\n",a/b);
		break;
		case 5:
		exit(0);
	default:
		printf("please try again later");
		
}
}
