//using c++ wap to print factorial using function
#include<iostream>
int factorial(int);
using namespace std;
int main()
{
	int a,fact;
 	cout<<"enter the value\n";
 	cin>>a;
	fact=factorial(a);
  	
  
}
int factorial(int a ){
		int fact=1,i;
	for(i=1;i<=a;++i)
	{
		fact*=i;
		}
		cout<<fact;
    
	
}
