#include<stdio.h>
int main()
{
	int n,temp,m,p,rem;
	
	scanf("%d",&n);
	
	
	while(n > 0)
	{
		temp = n,m = 0,p = 1;
		
		while(temp)
		{
			rem = temp % 10;
			temp/=10;
			
			if(rem!=0)
				m+=p;
			p*=10;
		}
		
		printf("%d ",m);
	n = n - m;
	}
}
