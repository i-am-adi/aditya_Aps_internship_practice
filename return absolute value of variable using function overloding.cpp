//return absolute value of variable using function overloding
#include<iostream>
using namespace std;
void absolute(int);
void absolute(float);
void absolute(int i){
	if(i<0)
	i=-i;
	cout<<"\n value="<<i;
}
void absolute(float f){
	if(f<0)
	f=-f;
	cout<<"\n value="<<f;
}
int main(){
	int a;
	float b;
	cout<<"\nenter values of a and b:";
	cin>>a>>b;
	absolute(a);
	absolute(b);
	return 0;
}
