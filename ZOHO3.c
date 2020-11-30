#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter the range:");
	scanf("%d %d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		if((i & 1)!=0)
		{
			printf("%d ",i);
		}
	}
}
