//using c++ wap to print fibonacci series using for loop
#include<iostream>
using namespace std;
int main()
{
	int f0=0,f1=1,f2,n,i;
	cout<<"enter number: ";
	cin>>n;
	for(i=3;i<=n;++i){                       
	
    f2=f0+f1;
    cout<<"\t"<<f2;
    f0=f1;
    f1=f2;
	}


	
}
