#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,rem,sum = 0,k = 0,carry,arr[10];
	
	char a[30],b[30];
	
	gets(a);
	gets(b);
	
	if(strlen(b) > strlen(a))
	{
	
	for(i = strlen(a) - 1,j = strlen(b)-1;i >= 0;i--,j--)
	{
		if(a[i] == '0' && b[j] == '0')
		{
			sum = sum * 10 + ('0' - '0');
			arr[k++] = '0' - '0';
		}
		else if(a[i] == '1' && b[j] == '0')
		{
			sum = sum * 10 + ('1' - '0');
			arr[k++] = '1' - '0';
		}
		else if(a[i] == '0' && b[j] == '1')
		{
			sum = sum * 10 + ('1' - '0');
			arr[k++] = '1' - '0';
		}
		
		else if(a[i] == '1' && b[j] == '1')
		{
			sum = sum * 10 + ('0' - '0');
			arr[k++] = '0' - '0';
			carry = 1;
			
		}
	}
	if(carry == (b[0] - '0'))
	{
		arr[k++] = 0;
		arr[k++] = carry;
	}
	
	for(i = k-1;i>=0;i--)
		printf("%d",arr[i]);
    }
	
	else if(strlen(b) < strlen(a))
	{
	
	for(i = strlen(a) - 1,j = strlen(b)-1;j >= 0;i--,j--)
	{
		if(a[i] == '0' && b[j] == '0')
		{
			sum = sum * 10 + ('0' - '0');
			arr[k++] = '0' - '0';
		}
		else if(a[i] == '1' && b[j] == '0')
		{
			sum = sum * 10 + ('1' - '0');
			arr[k++] = '1' - '0';
		}
		else if(a[i] == '0' && b[j] == '1')
		{
			sum = sum * 10 + ('1' - '0');
			arr[k++] = '1' - '0';
		}
		
		else if(a[i] == '1' && b[j] == '1')
		{
			sum = sum * 10 + ('0' - '0');
			arr[k++] = '0' - '0';
			carry = 1;
			
		}
	}
	if(carry == ([0] - '0'))
	{
		arr[k++] = 0;
		arr[k++] = carry;
	}
	
	for(i = k-1;i>=0;i--)
		printf("%d",arr[i]);
    }
	
	
}
