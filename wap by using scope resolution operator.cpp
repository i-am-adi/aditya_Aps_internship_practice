//wap by using scope resolution operator
#include<iostream>
using namespace std;
int a=10;
int main()
{
	int a=20;
	if(a==20){
	int a=30;
		cout<<"\n local a ="<<a<<endl;
		cout<<"\n globle a ="<<::a<<endl;
}
       	cout<<"\n local a ="<<a<<endl;
       	cout<<"\n globle a ="<<::a<<endl;
       	return 0;
}

