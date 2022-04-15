//using c++ wap to accept a amount and find number of notes required for a given amount of money 
#include<iostream>
using namespace std;
int main()
{int amt,note,n1;
cout<<"enter amount:";
cin>>amt;
cout<<"enter note:";
cin>>note;
switch(note)
{case 2000: n1=amt/2000;
           cout<<n1;
           amt=amt%2000;
           break;
case 500: n1=amt/500;
           cout<<n1;
           amt=amt%500;
           break;
case 200: n1=amt/200;
           cout<<n1;
           amt=amt%200;
           break;
case 100: n1=amt/100;
           cout<<n1;
           amt=amt%100;
           break;
case 50: n1=amt/50;
           cout<<n1;
           amt=amt%50;
           break;
case 20: n1=amt/20;
           cout<<n1;
           amt=amt%20;
           break;
case 10: n1=amt/10;
           cout<<n1;
           amt=amt%10;
           break;
}
}

