//array algoritham 4
#include<stdio.h>
int main()
{
	int arr[3],i,temp;
	arr[0]=11;
	arr[1]=121;
	arr[2]=1221;
	temp=arr[0];
	arr[0]=arr[2];
	arr[2]=temp;
	
	for(i=0;i<3;++i)
	{
	 printf("%d\t",arr[i]);	
	}
   
		}
	
