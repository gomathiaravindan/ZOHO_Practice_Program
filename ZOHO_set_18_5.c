## Given array find maximum sum of contiguous sub array 
{-2 -3 4 -1 -2 1 5 -3}
output 7 elements [ 4 -1 -2 1 5] 





#include<stdio.h>
int main()
{
	int n,i,j,meh=0,msf = 0,ind,ind1;
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		meh = meh+arr[i];
		
		if(meh< arr[i])
		{
			meh = arr[i];
			ind1 = i;
		}
			
		if(msf < meh)
		{
			msf = meh;
			ind = i;
		}
	}
	printf("The maximum sum is: %d\n",msf);
	printf("The elements are:");
	printf("[");
	for(i=ind1;i<=ind;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]");
	return 0;
}
