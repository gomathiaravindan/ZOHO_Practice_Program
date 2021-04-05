## Adding a digit to all the digits of a number.
Sample Case: Input digit = 4, number = 2875
Output: 612119





#include<stdio.h>
#include<string.h>
int main()
{
	char number[50];
	int to_add_number;
	
	printf("Enter a string of number:");
	scanf("%s",number);
	
	printf("Enter a number to add:");
	
	scanf("%d",&to_add_number);
	
	add_to_single_digit(number,to_add_number);
	
	return 0;
}


int add_to_single_digit(char *number,int to_add_number)
{
	int ch;
	
	for(ch =0;ch<strlen(number);ch++)
	{
		printf("%d",(number[ch] - '0') + to_add_number);
	}
}
