// using c++ wap to accept paper marks,if paper marks less thn 45 show fail otherwise pass
#include<iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"Enter marks of 3 papers:\n";
cin>>a>>b>>c;
if(a>=45 && b>=45 && c>=45)
{
	cout<<"Pass.";
}
else
{
	cout<<"Fail.";
}
}
