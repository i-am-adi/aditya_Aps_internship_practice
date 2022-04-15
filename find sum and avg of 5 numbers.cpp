//find sum and avg of 5 numbers
#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<"\n enter no";
		cin>>n;
		sum+=n;
	}
float avg=sum/5.0;
cout<<"\n sum= "<<sum<<"avg= "<<avg;
return 0;
}

