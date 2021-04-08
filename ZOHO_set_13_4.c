## .A number is called as binary-decimal if all the digits in the number should be either ‘1’ or ‘0’. Any
number can be written as a sum of binary-decimals. Our task is to find the minimum number of 
binary-decimals to represent a number.Input : 32Output : 11 11 10 
Input : 120
Output : 110 10





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
