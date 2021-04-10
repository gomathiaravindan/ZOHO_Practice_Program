## Check whether the 2 given strings are anagram or not
Sample Case: Input hello
holle
Output Anagram
Input: hlooe
oiewq
Output: Not a Anagram





#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[20],s1[20];
	int i,j,flag = 0;
	
	int *letters  = (int*)calloc(27,sizeof(int));
	
	
	gets(s);
	gets(s1);
	if(strlen(s) != strlen(s1))
	{
		printf("Not a anagram!!");
	}
	else
	{
		for(i=0;i<strlen(s);i++){
			
			letters[s[i] - 'a']++;
		}
		
		for(i=0;i<strlen(s1);i++)
		{
			letters[s1[i] - 'a']--;
		}
	}
	
	for(i=0;i<27;i++)
	{
		if(letters[i] == 1)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("Anagram");
	}
	else
	{
		printf("Not a anagram");
	}
	
	free(letters);
}
