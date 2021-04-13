#include<stdio.h>
#include<string.h>
int main()
{
	int i,count = 0,ind,sum = 0,count1=0;
	char expression[40];
	
	gets(expression);
	
	for(i = 0;expression[i] >= '1' && expression[i] <= '9';i++);
	
	ind = i;
	
	sum = expression[0] - '0';
	for(i=1;i<ind,ind<strlen(expression);i++)
	{
		switch(expression[ind])
		{
			case '+':
				{
					sum = sum + (expression[i] - '0');
					break;
				}
			case '-':
				{
					sum = sum - (expression[i] - '0');
					break;
				}
			case '*':
				{
					sum = sum * (expression[i] - '0');
					break;
				}
			case '/':
				{
					sum = sum / (expression[i] - '0');
					break;
				}
				
		}
		
		ind++;
	}
	printf("%d",sum);

	
}
