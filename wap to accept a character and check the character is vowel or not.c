//wap to accept a character and check the character is vowel or not
#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character : ");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
	printf("%c is vowel.",ch);
	else
	printf("%c is not vowel.",ch);
	
}
