## Take a 2 or 3 digit input number, reverseit and add it to the original number until the obtained number is a palindrome or 5 iterations are completed.
Sample Case: Input n = 32
Output 55
Input n = 39
Output 363





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
