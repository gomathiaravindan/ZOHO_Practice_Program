## Remove the duplicate row from the matrix
Sample Case: Input row = 4, column = 3
	1 1 1
	1 0 1
	1 0 1
	1 1 0
Output
1 1 1
1 0 1
1 1 0






#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int m,n,i,j,deci,sum,matrix[40][40],*decimal,k = 0,freq[20],f = 0;
	
	printf("Enter the row and column of the matrix:");
	scanf("%d %d",&m,&n);
	
	for(i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	decimal = (int*)calloc(n,sizeof(int));
	for(i = 0;i<m;i++)
	{
		
		for(j = 0;j<n;j++)
		{
			decimal[k] += (matrix[i][j] * pow(2,deci));
			++deci;
		}
		k++;
		deci = 0,sum = 0;
	}
	
	for(i = 0;i<k;i++)
	{
		printf("%d ",decimal[i]);
	}
	printf("\n");
	for(i = 0;i<k;i++)
	{
		for(j = i + 1;j <= k-1;j++)
		{
			if(decimal[i] == decimal[j])
			{
				freq[f++] = j;
			}
		}
	}
	k = 0;
	for(k = 0 ;k<f;k++)
	{
		for(i = 0;i<m;i++)
		{
			if(i!=freq[k])
			{
				for(j = 0;j<n;j++)
				{
					printf("%d ",matrix[i][j]);
				}
			}
			else
			{
				continue;
			}
			printf("\n");
		}
	}
	free(decimal);
}
