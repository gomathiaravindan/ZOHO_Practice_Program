## Print the pattern.
Sample Case: Input third
Output t d
       h r
       i
       h r
       t d





#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i,j,mid,k,temp;
	
	gets(str);
	
	mid = strlen(str)/2;
	temp = mid;
	
	/*for(i = 0, j=strlen(str)-1;i<j;i++,j--)
	{
		printf("%c %c",str[i],str[j]);
		printf("\n");
	}
	printf("%c",str[i]);*/
	
	for(i=0;i<strlen(str);i++)
	{
		if(i == mid)
		{
			printf("%c",str[i]);
			printf("\n");
			
		}
		else if(i < mid)
		{
			printf("%c %c",str[i],str[(strlen(str) - 1) - i]);
			printf("\n");
		
		}
		
		else
		{
			printf("%c %c",str[(strlen(str) - 1) - i],str[i]);
			printf("\n");
		}
		
	}
}
