#include<stdio.h>
int main()
{
	int i,coeff = 1,n,j,k;
	
	scanf("%d",&n);
	
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<=i;j++)
		{
			if(j == 0 || j == i)
			{
				coeff = 1;
			}
			else
			{
				coeff = coeff * (i - j + 1)/j;
				
			}
			printf("%d ",coeff);
		}
		printf("\n");
	}
}
