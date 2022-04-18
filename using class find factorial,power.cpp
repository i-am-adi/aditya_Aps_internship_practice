//using class find factorial,power
#include<iostream>
#include<math.h>
using namespace std;
class Arithmetic{
	private:
		int a,b;
		
	public:
		int factorial(){
			int fact=1;
			for(int i=1;i<=a;++i){
	     	fact*=i;   	
			 }	
	 cout<<"fact="<<fact;	
		}
		int power(){
			int p;
		 p=pow(a,b);
       cout<<a<<"^"<<b<<"="<<p;
	    }
		void show(){
			 cout<<"\nenter the value of a and b\n";
		cin>>a>>b;
		}
		void show1(){
			 cout<<"\nenter the value of a \n";
		cin>>a;
		}
};

int main()
{  
	int i;
	 Arithmetic c;
	 def:
	 cout<<"\n1.Factorial\n2.Power\n3.Restart Program";
	 cin>>i;
 switch(i)
 {
	case 1: c.show1();
		  cout<<"\n Factorial is "<<c.factorial();
		    break;
	case 2: c.show();
		   cout<<"\n Power is "<<c.power();
	        break;

	
	return 0;
}	 goto def;
}
