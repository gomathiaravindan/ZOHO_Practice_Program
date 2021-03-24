## Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else 
return -1. 
Eg 1:Input:
 String 1: test123string
 String 2: 123
 Output: 4
Eg 2: Input:
 String 1: testing12
 String 2: 1234 
 Output: -1





#include<stdio.h>
#include<string.h>
int main()
{
	char s[40],s1[40];
	int i,j,count = 0,ind,k;
	
	gets(s);
	
	printf("Enter the substring to find the 1st index:");
	gets(s1);
	
	for(i=0;s[i]!=s1[0];i++);
	
	ind = i;
	
	for(j = 0,k = i;j < strlen(s1);j++,k++)
	{
		if(s1[j] == s[k])
		{
			count++;
		}
	}
	
	if(count == strlen(s1))
	{
		printf("%d",ind);
	}
	else
	{
		printf("-1");
	}
}
