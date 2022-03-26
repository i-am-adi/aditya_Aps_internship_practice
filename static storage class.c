//static storage class
#include<stdio.h>
void fun();
extern int x=5;
int main(){

	fun();fun();fun();
}
void fun(){
	static int x=2,y=5;
	int z=3;
	printf("\nx=%d\ty=%d\tz=%d",x,y,z);
	x++;
	y++;
}
