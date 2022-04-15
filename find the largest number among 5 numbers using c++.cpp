// find the largest number among 5 numbers using c++
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,max;
	cout<<"\n enter 5 numbers :\n";
	cin>>a>>b>>c>>d>>e;
	max=a;
	if(max<b)
	 max=b;
	if(max<c)
	 max=c;
	 if(max<d)
	 max=d;
	if(max<e)
	 max=e;
	cout<<"\n the largest no. is:"<<max;
	
}
