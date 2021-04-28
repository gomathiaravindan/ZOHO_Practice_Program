#include<stdio.h>
int main()
{
	int n,rev,temp = 0,temp1,sum = 0,count = 0,palindrome,flag = 1,sum1 = 0,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(count < 5)
	{
		temp1 = n;
		
		while(temp1!=0)
		{
			rem =  (temp1 % 10);
			sum = sum * 10 + rem;
			temp1 /= 10;
		}
		temp = n + sum;
		
		//printf("%d\n",temp);
		palindrome = temp;
		
		while(palindrome!=0)
		{
			sum1 = sum1 * 10 + (palindrome % 10);
			palindrome/=10;
		}
		
		if(temp == sum1)
		{
			break;
		}
		else
		{
			n = sum1;
			sum = 0;
			sum1 = 0;
			count++;
		}
	}
	printf("%d",sum1);
}
