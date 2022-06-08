/*library management*/
/*errors
 1.after update completed show function
 2.show issued books*/
#include <iostream>
#include <string.h>
#include <windows.h>
#define b1  "Clean Code: A Handbook of Agile Software Craftsmanship \n\t\tby Robert C. Martin"
#define b2  "The Pragmatic Programmer: From Journeyman to Master \n\t\tBy Andy Hunt and Dave Thomas"
#define b3  "A Philosophy of Software Design \n\t\tby John Outsterhout"
#define b4  "Don’t Make Me Think \n\t\tby Steve Krug"
#define b5  "The Mythical Man-Month: Essays on Software Engineering \n\t\tby Frederick P. Brooks"
#define b6  "Head First Design Patterns\n\t\tby Eric Freeman, Kathy Sierra, Bert Bates, and Elisabeth Robson"
#define b7  "24 Deadly Sins of Software Security \n\t\tby David Le Blanc, John Viega, and Michael Howard"
#define b8  "Agile Metrics in Action \n\t\tby Christopher Davis"
#define b9  "The Rails 4 Way, The Rails 5 Way, The Rails 6 Way \n\t\tby Obie Fernandez"
#define b10 "Code Complete (Paperback) \n\t\tby Steve McConnell"
using namespace std;
class Library{
	public:
	int n,rno,id,idd,loc,rollno[10],sid[10],ch1,no,n1,bsid,id1;
	char bname[20][10],sname[20][10],cname[20][10],name[20],clgname[20],brname[20],a[2],bsname[20][10];
	void head()
	{
			system("color f4");
		for(int i=0;i<1;i++)
						{for(int i=0;i<215;i++)
						{
							cout<<"\4";
							Sleep(20);
						}
					
							
							cout<<"\t\t\t\t\t\t\t\t\t\t\t\t       _     _  _   _ _   _  \n"; 
							   Sleep(200);
							cout<<"\t\t\t\t\t\t\t\t\t\t\t| | | |_ |  |  | | | | | |_  \n";
							   Sleep(200);
							cout<<"\t\t\t\t\t\t\t\t\t\t\t|_|_| |_ |_ |_ |_| | | | |_ \n";
							   Sleep(200);
							cout<<"\t\t\t\t\t\t\t\t\t\t\t\t___ _  \n";
							   Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t | | | \n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t | |_| \n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t     _  _  _  _ _ _\n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t|  ||_||_||_||_||_|\n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t|__||_|| [| || [ | \n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t _ _  _  _    _  _  _  _ _  _  _   ___\n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t| | ||_|| | ||_|| _|_ | | ||_ | | | | \n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t| | || || |_|| ||_||_ | | ||_ | |_| | \n";
						       Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t _ _ _ _ ___ _  _ _ \n";
						       Sleep(200);
							cout<<"\t\t\t\t\t\t\t\t\t\t\t|_ |_||_  | |_ | | |\n";
							   Sleep(200);
						    cout<<"\t\t\t\t\t\t\t\t\t\t\t _| |  _| | |_ | | |\n";
						}
					
						for(int i=0;i<215;i++)
						{
							cout<<"\4";
							Sleep(20);
						}
							system("color f3");
						cout<<"Loading";
							for(int i=0;i<5;i++)
						{
							Sleep(500);
							cout<<".";
						}
						system("cls");
	}
    void management()
        {system("color f9");
        int ch;
        char a[2];
	start:
	cout<<"\n Select Choice: ";
	cout<<"\n1. Add Candidate. \n2. Update Candidate Data. \n3. Show Candidate Data.\n4. Delete Candidate Data.";
    cout<<"\n5. Show Books avilable in Library. \n6. Logout";
	cin>>ch;
	Library l;
	switch(ch)
	{
		case 1:l.reg();
		     	cout<<"\n\n\n\n If you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
		case 2:l.update();
		       	cout<<"\n\n\n\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
		case 3:l.show();
		       	cout<<"\n\n\n\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
                system("cls");
		case 4:l.delet();
		        cout<<"\n\n\n\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }
        case 5:l.books();
		        cout<<"\n\n\n\nIf you wanna continue print yes(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
     	       	goto start;
             	}
                else
                {
              	exit(0);
                }system("cls");
                
         case 6:system("cls");
                system("color f4");
		        for(int i;i<1;i++)
		        {
		          cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tT";
				  Sleep(500);
				  cout<<"H";
				  Sleep(500);
				  cout<<"A";
				  Sleep(500);
				  cout<<"N";
				  Sleep(500);
				  cout<<"K";
				  Sleep(500);
				  cout<<"\n\t\t\t\t\t\t\t\tY";
				  Sleep(500);
				  cout<<"O";
				  Sleep(500);
				  cout<<"U";
				  Sleep(500);
				  cout<<"\1";
				  Sleep(500);	
				  cout<<"\2";
				  Sleep(500);
				} 
		        exit(0);       
	}
        }

	void reg()
	{
            cout<<"\n How many record do you want to register: ";
			cin>>n;
            cout<<"\n";

				for (int i = 0; i < n; ++i)
				{   cout<<"\n Student Id: "; 
					cin>>sid[i];
					cout<<"\n Student Roll No: ";
					cin>>rollno[i];
					cout<<"\n Student Name: "; 
					cin>>sname[i];
					cout<<"\n College Name: "; 
					cin>>cname[i];
					cout<<"\n Branch Name: "; 
					cin>>bname[i];
				}
				system("cls");
				cout<<"Congatulations.You successfully registered.\1\1";
				cout<<"\n\n\n\n";
				
	} 
   void update()
   {
   	cout<<"\n Enter Student Id: ";
				cin>>id;
				for (int i = 0; i < n; ++i)
				{
					if (id==sid[i]){
						top1:
						cout<<"\n 1. Student Roll No: "<<rollno[i];
						cout<<"\n 2. Student Name  : "<<sname[i];
						cout<<"\n 3.College Name: "<<cname[i];
					    cout<<"\n 4.Branch Name: "<<bname[i];
				        cout<<"\n 5.Save and return to main menu ";
						cout<<"\n Select Choice: ";
						cin>>ch1;
						switch(ch1){
							case 1: cout<<"\n Student Roll No: ";
						            cin>>rno;
									rollno[i]=rno;
									system("cls");
									cout<<"\nCandidate's Roll No updated successfully\1\1";
									cout<<"\n\n";
									goto top1;
							case 2: cout<<"\n Student Name: ";
							        cin>>name;
									strcpy(sname[i],name);
									system("cls");
									cout<<"\nCandidate's Name updated successfully\2\2";
									cout<<"\n\n";
									goto top1;
							case 3: cout<<"\n College Name: ";
							        cin>>clgname;
									strcpy(cname[i],clgname);
									system("cls");
									cout<<"\nCandidate's College Name updated successfully\1\1";
									cout<<"\n\n";
									goto top1;
							case 4: cout<<"\n Branch Name: ";
							        cin>>brname;
									strcpy(bname[i],brname);
									system("cls");
									cout<<"\nCandidate's Branch Name updated successfully\2\2";
									cout<<"\n\n";
									goto top1;
							
							case 5:         management(); 
								

						}
					}
				}
   }
   void show()
   {
              	cout<<"\n Candidate's Data Are \n";
              	for(int i=0;i<100;i++)
				{
					cout<<"-";
				}

				cout<<"\n Candidate's Id | \tRollno |\tName\t|College name\t|Branch name\n";
				for(int i=0;i<100;i++)
				{
					cout<<"-";
				}

				for (int i = 0; i < n; ++i)
				{
				cout<<"\n "<<sid[i]<<"\t\t|\t"<<rollno[i]<<"\t|\t"<<sname[i]<<"\t|\t"<<cname[i]<<"\t|\t"<<bname[i]<<"\n";
				for(int i=0;i<100;i++)
				{
					cout<<"-";
				}
				}
				cout<<"\n\n\n\n";
				
   }
   void delet()
   {
           cout<<"\nEnter Candidate's Id.";
           cin>>idd;
           for(int i;i<n;++i)
           {
           	if(idd==sid[i])
           		{
           			loc=i;
           	   }
           } 
           for(int i=loc;i<n;++i)
           {
           	sid[i]=sid[i+1];
           	rollno[i]=rollno[i+1];
           	strcpy(sname[i],sname[i+1]);
          	strcpy(cname[i],cname[i+1]);
          	strcpy(bname[i],bname[i+1]);
           }   
           system("cls");
           cout<<"\nCandidate's Data Deleted Successfully\1\2.";
           --n;
           cout<<"\n\n\n\n";
   }
   void books()
   {system("cls");
    cout<<"\n\n\n";
    	for(int i=0;i<100;i++)
				{
					cout<<"\4";
					Sleep(50);
				};
   	cout<<"\nSorry to say,\nbut at the moment only the following books are availabe.\n";
   	cout<<"\nPlease Select books from following list\1\2";
   	cout<<"\n";
   		for(int i=0;i<100;i++)
				{
					cout<<"\4";
					Sleep(50);
				};
   	cout<<"\n1."<<b1;
   	cout<<"\n";
   	cout<<"\n2."<<b2;
   	cout<<"\n";
   	cout<<"\n3."<<b3;
   	cout<<"\n";
   	cout<<"\n4."<<b4;
   	cout<<"\n";
   	cout<<"\n5."<<b5;
   	cout<<"\n";
   	cout<<"\n6."<<b6;
   	cout<<"\n";
   	cout<<"\n7."<<b7;
   	cout<<"\n";
   	cout<<"\n8."<<b8;
   	cout<<"\n";
   	cout<<"\n9."<<b9;
   	cout<<"\n";
   	cout<<"\n10."<<b10;
   	cout<<"\n";
   		for(int i=0;i<100;i++)
				{
					cout<<"\4";
					Sleep(50);
				};
	            cout<<"\n";
   	         	cout<<"\nDo you want to issue a Book from given list(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
              	 cout<<"\nSorry to say,\n\tbut at a time you issued only one Book.";
     	       	 cout<<"\nEnter the no of book that you want to issue:";
                cin>>n1;
                for(int i=0;i<n;++i)
            {   cout<<"\nEnter the Candidate's Id";
                cin>>bsid; 
				bsname[i][10]=sname[i][10];  
                if (bsid==sid[i])
                {
                 switch(n1)
                 {
                    case 1:cout<<"\n"<<b1;
                 	       cout<<"\n\t\tIssued to "<<bsname[i];
                 	       goto aa;
                    case 2:cout<<"\n"<<b2;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 3:cout<<"\n"<<b3;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 4:cout<<"\n"<<b4;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 5:cout<<"\n"<<b5;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 6:cout<<"\n"<<b6;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 7:cout<<"\n"<<b7;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 8:cout<<"\n"<<b8;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 9:cout<<"\n"<<b9;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                    case 10:cout<<"\n"<<b10;
                           cout<<"\n\t\tIssued to "<<bsname[i];
                           goto aa;
                   }
            }
			       aa:
                cout<<"\nDo you want to show book which is issued to a Candidate(y/n)";
     	        cin>>a[2];
              	if (a[2]=='y')
              	{
                   cout<<"\nPlease Enter Candidate's Id for confirmation\1\1";
                   cin>>id1;
                   if (id1==sid[i])
                   system("color f5");
                   {
                   	for(int i=0;i<100;i++)
			     	{
					cout<<"-";
			    	}
			    	cout<<"\nstudent Name\tIssued book number\n";
			    	for(int i=0;i<100;i++)
			     	{
					cout<<"-";
			    	}
			    	cout<<"\n"<<bsname[i]<<"\t"<<n1;
			    	cout<<"\n";
			    	for(int i=0;i<100;i++)
			     	{
					cout<<"-";
			    	}
                   }
              	
                }
             	}
            }
                else
                {
              	exit(0);
                }
   }
};
int main(int argc, char const *argv[])
{Library l;
l.head();
char username[20];
	char password[20];
	system("color f5");
	u:
	cout<<"\nplease enter the username:";
	cin>>username;
	b:
	cout<<"\nplease enter the password: ";
	cin>>password;
	if(strcmp(username,"aditya@123")==0)
	{
		if(strcmp(password,"443402")==0)
		{
			system("cls");
			cout<<"\nlogin successfull";
				l.management();
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

