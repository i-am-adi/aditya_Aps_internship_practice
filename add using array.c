//add using array
#include<stdio.h>
int main()
{
	int arr[100],sum=0,i,n;
	printf("\n Enter size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	

	for(i=0;i<n;i++)
	{scanf("%d",&arr[i]);
        sum+=arr[i];
	}
			printf("sum=%d ",sum);

}

