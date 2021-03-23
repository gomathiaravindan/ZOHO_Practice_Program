## To find the factors of the numbers given in an array and to sort the numbers in descending order 
according to the factors present in it.
Input:
Given array : 8, 2, 3, 12, 16
Output:
12, 16, 8, 2, 3



#include<stdio.h>
int main()
{
	int n,i,j,temp,temp1;
	scanf("%d",&n);
	int a[n],count[n],max = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max < a[i])
		{
			max = a[i];
		}
	}
	int *factor = (int*)calloc(max+1,sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		for(j = 2;j<= a[i]/2;j++)
		{
			if(a[i]%j==0)
				factor[a[i]]++;
				
		}
	
	}
 	for(i=0;i<n;i++)
	{
		for(j = i+1 ;j<=n-1;j++)
		{
		
			if(factor[a[i]] <= factor[a[j]])
			{
				temp = a[i];
		
				a[i] = a[j];
				
				a[j] = temp;
				
			}
		}
		
	}
	
	for(i=0;i<n;i++)
	{
	
			printf("%d ",a[i]);
	}
	
	
}
