#include<stdio.h>
int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<(2 * n)-1;i++)
	{
		for(j=0;j<(2 * n)-1;j++)
		{
			printf("%d",abs(n - i - 1)> abs(n - j -1) ? abs(n - i - 1) :abs(n - j -1) + 1);
		}
		printf("\n");
	}
	
}
