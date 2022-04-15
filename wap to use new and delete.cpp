//wap to use new and delete
#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int;
	*p=10;
   	cout<<"\n Value ="<<*p<<endl;
      delete p;
       	return 0;
}

