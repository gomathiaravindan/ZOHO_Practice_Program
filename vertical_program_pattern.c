## Print the pattern
Sample Case: Input PROGRAM
Output
   
	    G
	   GR
	  GRA
	 GRAM
	GRAMP
       GRAMPR
      GRAMPRO
   
Input BASIC
Output
       S
      SI
     SIC
    SICB
   SICBA

#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	gets(str);
	
	int i,j,mid,count=0,k;
	
	mid = strlen(str)/2;
	
	for(i=1;i<=strlen(str);i++)
	{
		for(j = 1;j<=strlen(str);j++)
		{
			if(j <= strlen(str) - i)
			{
				printf(" ");
			}
			
		}	
		for(k=0;k<=count;k++)
		{
			printf("%c",str[(mid+k)%strlen(str)]);
			
		}
	    count++;
		printf("\n");
			
		}
		
		
	}
	

