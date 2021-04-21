## Print the pattern.
Sample Case: Input 1
Output: 0
Input: 2
Output: 00
	01
	10
	11





#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,rem,j=0;
	scanf("%d",&n);
	if(n == 1)
	{
		printf("0");
	}
	else
	{
	
		while(j < pow(2,n))
		{
			for(i = n-1;i>=0;i--)
			{
				rem = j>>i;
				(rem&1) ? printf("1") : printf("0");
			}
			printf("\n");
			j++;
		}
	}
}
