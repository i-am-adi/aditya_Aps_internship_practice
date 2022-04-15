//Dynamic binding in c++
#include<iostream>
using namespace std;
int main()
{
	int *p,n,i;
   	cout<<"\n How much elements ="<<endl;
     cin>>n;
     p=new int[n];
     for(i=0;i<n;++i)
      p[i]=i*10;
    cout<<"\n Values are ";
    for(i=0;i<n;++i)
    cout<<p[i]<<" ";
    delete p;
       	return 0;
}

