//function overloading
#include<iostream>
#include<math.h>
using namespace std;
 void test(int);
 void test(float);
 void test(int,float);

int main()
{ 
int a;
float b;
cout<<"\nEnter value of a ";
cin>>a;
cout<<"\nEnter value of b ";
cin>>b;
 test(a);
 test(b);
 test(a,b);
}
void test(int a){
	cout<<"\nint a ="<<a;
}
void test(float b){
	cout<<"\nfloat b ="<<b;
}
void test(int a,float b){
	cout<<"\nint a ="<<a;
	cout<<"\nfloat b ="<<b;
}
