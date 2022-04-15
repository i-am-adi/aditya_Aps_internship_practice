//using class find add,multi,sub,division
#include<iostream>
using namespace std;
class Addition{
	private:
		int a,b;
		
	public:
		int add(){
			return a+b;
		}
		int sub(){
			return a-b;
	    }
		int mult(){
			return a*b;
		}
		int div(){
			return a/b;
		}
		void show(){
			 cout<<"\nenter the value of a and b\n";
		cin>>a>>b;
		}
};

int main()
{  abc:
	int i;
	 Addition c;
	 c.show();
	 def:
	 cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Restart Program";
	 cin>>i;
 switch(i)
 {
	case 1: 
		  cout<<"\n Addition is "<<c.add();
		    break;
	case 2: 
		   cout<<"\n Subtraction is "<<c.sub();
	        break;
	case 3: 
	       cout<<"\n Multiplication is "<<c.mult();
	        break;
    case 4:	
	       cout<<"\n Division is "<<c.div();
	        break;
	case 5: goto abc;

	
	return 0;
}	 goto def;
}
