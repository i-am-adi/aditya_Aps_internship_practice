//using c++ find largest no. by using function
#include<iostream>
using namespace std;
int large(int,int);

int main(){
int a,b;
 cout<<"enter the 2 value\n";
 cin>>a>>b;
 large(a,b);}
int large(int a,int b ){

	if(a>b)
	cout<<a<<" is largest number";
else
	cout<<b<<" is largest number";
	return a;
	
}
