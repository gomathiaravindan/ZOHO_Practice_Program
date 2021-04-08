/*Given an array and a threshold value find the o/p 
eg) i/p {5,8,10,13,6,2};threshold = 3;
 o/p count = 17
 explanation:
Number parts counts
5 {3,2} 2
8 {3,3,2} 3
10 {3,3,3,1} 4
13 {3,3,3,3,1} 5
6 {3,3} 2
2 {2} 1 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,threshold,i,sum = 0,*arr,j,quo;
	
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the threshold value:");
	scanf("%d",&threshold);
	
	for(i=0;i<n;i++)
	{
		//rem = arr[i] % threshold;
		if(arr[i] % threshold == 0)
		{
			sum+= (arr[i] / threshold);
		}
		else
		{
			sum+= (arr[i]/threshold) + 1;
		}
		
	}
	
	printf("%d",sum);
}
