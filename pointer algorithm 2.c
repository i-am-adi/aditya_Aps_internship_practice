//pointer algorithm 2
#include<stdio.h>
int main()
{
	int i=98;
	int *j;
	int **k;
	j=&i;
	k=&j;
	printf("%d",**k);
	
	
}
