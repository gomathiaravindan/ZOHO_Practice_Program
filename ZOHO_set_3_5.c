#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,n1,i,j,max = 0,max1=0,*res,k=0;
	
	//printf("Enter the size of the 1st array:");
	scanf("%d",&n);
	
	int *arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",arr + i);
		if(max <  arr[i])
		{
			max = arr[i];
		}
	}
	
	//printf("Enter the size of the 2nd array:");
	
	scanf("%d",&n1);
	
	int *arr1 = (int*)malloc(n1*sizeof(int));
	
	for(i=0;i<n1;i++)
	{
		scanf("%d",arr1 + i);
		if(max1 < arr1[i])
		{
			max1 = arr1[i];
		}
	}
	int merge_array[n+n1];
	if(max < max1)
	{
		res = (int*)calloc(max1+1,sizeof(int));
	}
	
	else
	{
		res = (int*)calloc(max,sizeof(int));
	}
	
	for(i=0;i<n;i++)
	{
		res[arr[i]] = 1;
	}
	
	for(i = 0;i<n1;i++)
	{
		
		res[arr1[i]] = 1;
	}
	
	for(i=0;i<max1+1;i++)
	{
		if(res[i] == 1)
		{
			merge_array[k] = i;
			k++;
		}
	}
	
	for(i=0;i<k;i++)
	{
		printf("%d ",merge_array[i]);
	}
	free(arr);
	free(arr1);
	free(res);
}
