//wap to find the smallest number among 4 numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,min;
	cout<<"\n enter 4 numbers :\n";
	cin>>a>>b>>c>>d;
	min=a;
	if(min>b)
	 min=b;
	if(min>c)
	 min=c;
	 if(min>d)
	 min=d;
	cout<<"\n the smallest no. is:"<<min;
	
}
