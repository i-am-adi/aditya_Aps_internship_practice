//wap to accept a character and check wheather it is vowel or not
#include<iostream>
using namespace std;
int main()
{char b;
cout<<"enter any character:";
cin>>b;
switch(b){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		
		cout<<b<<" is a vowel\n";
	
		break;
		default:
		cout<<b<<" is not a vowel";
}
	
}
