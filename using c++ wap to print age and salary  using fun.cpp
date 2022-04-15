//using c++ wap to print age and salary  using fun
#include<iostream>
using namespace std;
struct person{
	int age;
	float salary;
	void set(int a,float s){
		age=a;
		salary=s;
	}
	void show(){
		cout<<"age   ="<<age;
		cout<<"\nsalary="<<salary;
	}
};
int main()
{int a,b;
cout<<"enter age and salary:\n";
cin>>a>>b;
	person p;
	p.set(a,b);
	p.show();
	return 0;

	
}
