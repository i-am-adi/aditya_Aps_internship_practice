//program to print (54321) without using looping
#include<stdio.h>

int main(){
static int x=5;
if(x>0){
	printf("%d\t",x);
	x--;
	main();
}
}

