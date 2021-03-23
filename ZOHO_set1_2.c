## Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the 
## following conditions
1. 5 if a perfect square
2. 4 if multiple of 4 and divisible by 6
3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
Should display the numbers based on increasing order


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	int *arr = (int*)malloc(n * sizeof(int));
	
	int *wei = (int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
		if(arr[i] %2 == 0)
		{
			wei[i]= wei[i] + 3;
		}
		if(sqrt(arr[i]) * sqrt(arr[i]) == arr[i])
		{
			wei[i]= wei[i] + 5;
		}
		
		
		if(arr[i] % 4 ==0 && arr[i] % 6 == 0)
		{
			wei[i] = wei[i] + 4;
		}
	}
	

	for(i=0;i<n;i++)
	{
		for(j = i+1;j<=n-1;j++)
		{
			if(wei[i] > wei[j])
			{
				wei[i] = wei[i] ^ wei[j];
				wei[j] = wei[j] ^ wei[i];
				wei[i] = wei[i] ^ wei[j];
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[j] ^ arr[i];
				arr[i] = arr[i] ^ arr[j];
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("<%d, %d> ",arr[i],wei[i]);
	}
	free(arr);
	free(wei);
}
