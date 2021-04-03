## .You’re given a number n. If write all the numbers from 1 to n in a paper, we have to find the 
number of characters written on the paper.For example if n=13, the output should be 18 if n = 101, 
the output should be 195 



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
