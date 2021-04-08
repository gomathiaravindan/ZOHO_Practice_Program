## You’re given an array. Print the elements of the array which are greater than its previous elements
in the array.
Input : 2, -3, -4, 5, 9, 7, 8 Output: 2 5 9You should solve this question in O(n) time.


#include<stdio.h>
int main()
{
	int i,n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i = 0;i<=n-1;i++)
	{
		if(arr[i] > arr[i-1])
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
