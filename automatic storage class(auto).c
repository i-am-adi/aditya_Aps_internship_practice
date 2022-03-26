//automatic storage class(auto)
#include<stdio.h>
int  fun(void);
int main()
{
auto int x=5;
printf("\nx=%d",x);
fun();
}
int fun(void){
	auto int x=6;
	printf("\nx=%d",x);
}
