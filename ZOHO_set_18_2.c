## Given sorted array check if two numbers sum in it is a given 
value
Input
Array = {1 3 4 8 10 } N = 7
output
true






#include<stdio.h>
int main()
{
	int n,i,j,target,sum=0,max = 0,diff = 0,flag = 0;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	int search[max+1];
	
	for(i=0;i<n;i++)
	{
		search[arr[i]] = 1;
	}
	printf("Enter the target number:");
	scanf("%d",&target);
	
	for(i=0;i<n;)
	{
		 if(arr[i] < target)
		 {
		 	diff = target - arr[i];
		 	if(search[diff] == 1 && search[arr[i]] == 1)
		 	{
		 		flag = 1;
		 		break;
			 }
			 else
			 	i++;
		 }
	}
	if(flag == 1)
		printf("true");
	else
		printf("false");
}
