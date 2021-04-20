#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,n1,*arr,*arr1,*occurance,max = 0,max1 = 0;
	
	printf("Enter the size of the first array:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	printf("Enter the size of the second array:");
	scanf("%d",&n1);
	
	arr1 = (int*)malloc(n1*sizeof(int));
	
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
		if(max1 < arr1[i])
		{
			max1  = arr[i];
		}
	}
	
	if(max <= max1)
	{
		occurance = (int*)calloc(max1+1,sizeof(int));
		for(i = 0;i<n;i++)
		{
			occurance[arr[i]]++;
		}
		
		for(i=0;i<n1;i++)
		{
			occurance[arr1[i]]--;
		}
		
		for(i = 0;i<max1+1;i++)
		{
			if(occurance[i] != 0)
			{
				break;
			}
		}
		
	
	}
	else
	{
		occurance = (int*)calloc(max+1,sizeof(int));
		for(i = 0;i<n;i++)
		{
			occurance[arr[i]]++;

		}
		
		for(i=0;i<n1;i++)
		{
			occurance[arr1[i]]--;
			
		}
		
		for(i = 0;i<max+1;i++)
		{
			if(occurance[i] != 0)
			{
				break;
			}
		}
		
		
		
	}
	
	if(n > n1)
	{
		for(j = 0;j<n;j++)
		{
			if(arr[j] == i)
			{
				printf("%d %d",arr[j],j+1);
				break;
			}
		}
	}
	else
	{
		for(j = 0;j<n1;j++)
		{
			if(arr1[j] == i)
			{
				printf("%d %d",arr1[j],j+1);
				break;
			}
		}
	}
	free(arr);
	free(arr1);
	free(occurance);
}
