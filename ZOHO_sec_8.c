#include<stdio.h>
int main()
{
	int n,i,j,k = 0;
	scanf("%d",&n);
	
	for(i = 1;i<=n;i++)
	{
		if(i % 2 == 0)
		{
			for(j=0;j<i;j++)
			{
				printf("-%d ",k+1);
				k++;
			}
			n = n - i;
		}
		else
		{
			for(j=0;j<i;j++)
			{
				printf("%d ",k+1);
				k++;
			}
			n = n - i;
		}
	}
	return 0;
}
