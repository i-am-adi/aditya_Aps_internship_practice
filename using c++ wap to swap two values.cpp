//using c++ wap to swap two values
#include<iostream>

using namespace std;
void swap(int*,int*);
int main()
{   int a,b;
	cout<<"enter values of a and b:\n";
	cin>>a>>b;
	cout<<"before swapping a="<<a<<"\tb="<<b;
	swap(&a,&b);
	cout<<"\nafter swapping a="<<a<<"\tb="<<b;
return 0;	
}
void swap(int*p,int*q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
