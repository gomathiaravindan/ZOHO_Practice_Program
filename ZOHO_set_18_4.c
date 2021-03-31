#include<stdio.h>
int main()
{
	int a,b,prod = 0,max, i =0;
	
	scanf("%d, %d",&a,&b);
	
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
	
	printf("%d",prod);
	return 0;
}
