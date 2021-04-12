#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,k,j,l,*arr,left,right;
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number of elements to rotate:");
	scanf("%d",&k);
	i = 0;
	
		for(i=0;i<n;)
		{
			left = i;
			
			if((i + k - 1) < n - 1)
			{
				right = i + k - 1;
			}
			else
			{
				right = n - 1;
			}
			while(left < right)
			{
				arr[left] = arr[left] ^ arr[right];
				arr[right] = arr[right] ^ arr[left];
				arr[left] = arr[right] ^ arr[left];
				left++;
				right--;
			}
			i+=k;
		}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}
