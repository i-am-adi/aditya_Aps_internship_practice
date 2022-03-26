//external storage class(extern)
#include<stdio.h>
void fun();
extern int x=5;
int main(){
	printf("\nx=%d",x);
	x=45;
	fun();
}
void fun(){
	printf("\nx=%d",x);
}
