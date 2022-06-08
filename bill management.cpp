#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<string.h>
using namespace std;
class Bill{
	float u,e,d,E;
	int pcode,no[12];
	char name[20],address[30];
	
       public:void reg()
	       {             
          cout<<"\n";
				  cout<<"\n Consumer name: "; 
					cin>>name;
					cout<<"\n Mobile number: ";
					cin>>no[12];
					cout<<"\n Consumer's Address: "; 
					cin>>address;
					cout<<"\n Pin code: "; 
					cin>>pcode;
					cout<<"\n Unit Consumed: "; 
					cin>>u;
				
				system("cls");
				for(int i=0;i<215;i++)
				{
					cout<<"\5";
				};
				cout<<"\n\t\t\t\t\t\t\t\t\t\tCongatulations.";
				Sleep(500);
				cout<<"\n\t\t\t\t\t\t\t\t\tYou registered successfully.\n";
				for(int i=0;i<215;i++)
				{
					cout<<"\5";
				};
				
		    }
		void billgeneration()
		        {  system("cls");
	              if(u>0 && 100>=u){
	                     	e=u*3.5;
	                     	d=e*1.00;
	                       	E=e-d;
	                       	}
                  else if(u>100 && 200>=u){
                            e=u*4.5;
    	                    d=e*0.75;
                          	E=e-d;
	                    }
	             else if(u>200 && 300>=u)
	                   {
	                       	e=u*5;
		                    d=e*0.50;
		                    E=e-d;
	                     }
	                else{
                        	e=u*6;
		                    E=e+300;
		                };
                      cout<<"\n\t\t\t\t\t\tconsumer name="<<name;
	                    cout<<"\n\t\t\t\t\t\tNo of units="<<u;
                     	cout<<"\n\t\t\t\t\t\tTotal discount="<<d;
                     	cout<<"\n\t\t\t\t\t\tActual electric bill="<<e;
                     	cout<<"\n\t\t\t\t\t\tTotal electric bill="<<E;
                }
            void show()
            {   cout<<"\n";
            		for(int i=0;i<215;i++)
				        {
			           		cout<<"-";
			           		Sleep(10);
				        };
				        cout<<"\nConsumer Name\t|\tAddress\t|\tPin code\t|\tMobile Number\t|\n";
				        	for(int i=0;i<215;i++)
			         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				        cout<<"\n"<<name<<"\t|\t"<<address<<"\t|\t"<<pcode<<"\t|\t"<<no[12]<<"\t|\n";
				          	for(int i=0;i<215;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };

             	
			      }
	 void showbill()
			      { system("cls");
			      	system("color f6");
             	for(int i=0;i<211;i++)
				         	{
				           	cout<<"\4";
				           	Sleep(10);
				        };
				        cout<<"\n";
				        cout<<"\t\t\t\t\t\t\t\t _    _  _ ___ _     _   ___ _ _";
				        Sleep(50);
				        cout<<"\n\t\t\t\t\t\t\t\t|_ | |_ |   | |_| | |  |  |  |_|";
				        Sleep(50);
				        cout<<"\n\t\t\t\t\t\t\t\t|_ |_|_ |_  | | [ | |_ |  |   | ";
				        Sleep(50);
				        cout<<"\n\t\t\t\t\t\t\t\t\t _      ";
				        Sleep(50);
				        cout<<"\n\t\t\t\t\t\t\t\t\t|_] | | |";
				        Sleep(50);
				        cout<<"\n\t\t\t\t\t\t\t\t\t|_] | |_|_\n";
				        Sleep(50);
			          for(int i=0;i<211;i++)
				         	{
				           	cout<<"\4";
				           	Sleep(10);
				        };
				        cout<<"\nLoading";
				        for(int i=0;i<5;i++)
				        {
				           	cout<<".";
				           	Sleep(500);
				        };
				        cout<<"\n\n";
				        for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				      cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tMAHAVITARAN\n";
				        for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				      cout<<"\n\tName:\t\t\t|\t"<<name<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				         cout<<"\n\tMobile number:\t\t|\t"<<no[12]<<"\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				         cout<<"\n\tAddress:\t\t|\t"<<address<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				        cout<<"\n\tPIN code\t\t|\t"<<pcode<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				         cout<<"\n\tUnits consumed:\t\t|\t"<<u<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				         cout<<"\n\tActual electric bill:\t|\t"<<e<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				         cout<<"\n\tTotal discount:\t\t|\t"<<d<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };
				        cout<<"\n\tTotal Electric Bill :\t|\t"<<E<<"\t\t|\n";
				         for(int i=0;i<211;i++)
				         	{
				           	cout<<"-";
				           	Sleep(10);
				        };   
			      }
};
int main()
{	        system("color f4");
              for(int i=0;i<211;i++)
				         	{
				           	cout<<"\6";
				           	Sleep(10);
				        };  
                    cout<<"\n\t\t\t\t\t\t\t\t\t\t\t       _     _  _   _ _   _  \n"; 
							      Sleep(200);
							      cout<<"\t\t\t\t\t\t\t\t\t\t\t| | | |_ |  |  | | | | | |_  \n";
							      Sleep(200);
							      cout<<"\t\t\t\t\t\t\t\t\t\t\t|_|_| |_ |_ |_ |_| | | | |_ \n";
							      for(int i=0;i<211;i++)
				         	 {
				           	cout<<"\6";
				           	Sleep(10);
				           };  
Bill l;
	int ch;
    char a[2];
	char username[20];
	char password[20];
	system("color f5");
	u:
	cout<<"\nplease enter the username:";
	cin>>username;
	b:
	cout<<"\nplease enter the password: ";
	cin>>password;
	if(strcmp(username,"yash")==0)
	{
		if(strcmp(password,"1234")==0)
		{
			system("cls");
			cout<<"\nlogin successfull";
				start:
	cout<<"\n Select Choice: ";
  cout<<"\n1. Consumer login. \n2. Show Consumer's Data. \n3. Generate electric bill.\n4. Show Electricity Bill.";
  cout<<"\n5. Logout. ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:l.reg();
		     	cout<<"\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
		case 2:l.show();
		       	cout<<"\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
		case 3:l.billgeneration();
		       	cout<<"\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
		case 4:l.showbill();
		        cout<<"\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
     
         case 5: exit(0);       
	}
		}
		else
		{    
			cout<<"\n invalid password";
			goto b;
		}
	}
	else
	{   system("cls");
		cout<<"\n username is invalid";
		goto u;
	}

		return 0;
	
        }
