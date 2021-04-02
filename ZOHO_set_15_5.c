## Given a string, change the order of words in the string (last string should come first).
Should use RECURSION 
 
Sample: one two three 
Output : three two one 





#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int len=0;
	
	gets(str);
	
	len = strlen(str);
	
	reverse(str,len-1);
	
	return 0;
}

int reverse(char *str,int len)
{
	
	if(len == 0)
	{
		printf("%s",str);
		return;
	}
	if(str[len] == ' ')
	{
		str[len] = '\0';
		
			printf("%s ",str + (len+1));
	}

	reverse(str,len-1);
	
	
}
