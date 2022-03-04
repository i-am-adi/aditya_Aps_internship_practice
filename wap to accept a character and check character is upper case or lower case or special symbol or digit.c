//wap to accept a character and check character is upper case or lower case or special symbol or digit
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character \n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	 printf("\n%c is upper case.",ch);
	else if(ch>=97   && ch<=122 )
	 printf("\n%c is a lower case.",ch);
	else if(ch>=48   && ch<=57 )
	 printf("\n%c is a digit.",ch);
	else 
	 printf("\n%c is a special symbol.");
}
