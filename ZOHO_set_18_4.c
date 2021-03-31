## Write function to find multipication of 2 numbers using +
operator You must use minimu possible iterations. 
Input: 3 , 4
Output 12 





#include<stdio.h>
int prod(int,int);
int main()
{
	int a,b,product = 0,max, i =0;
	
	scanf("%d, %d",&a,&b);
	
	product = prod(a,b);
	
	printf("%d",product);
	return 0;
}

int prod(int a,int b)
{
	int prod = 0,i = 0;
	if(a <= b)
	{
		while(i < a)
		{
			prod+=b;
			i++;
		}
	}
	else
	{
		while(i < b)
		{
			prod+=a;
			i++;
		}
	}
	return prod;
	
}
