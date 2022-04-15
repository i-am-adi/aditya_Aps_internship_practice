//using c++ find no. is even or odd by function
#include<iostream>
using namespace std;
int EvenOdd(int);

int main(){
int a;
 cout<<"enter the value\n";
 cin>>a;
 EvenOdd(a);


  
}
int EvenOdd(int a ){

	if(a%2==0)
	cout<<a<<" is even";
else
	cout<<a<<" is odd";
	return a;
	
}
