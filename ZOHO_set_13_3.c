#include<stdio.h>
int main()
{
	int n,i,count = 0,t;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		t = i;
		while(t!=0)
		{
			count++;
			t= t / 10;
		}
	}
	
	printf("%d",count);
	return 0;
}
