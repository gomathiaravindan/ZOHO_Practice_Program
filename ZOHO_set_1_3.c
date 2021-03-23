#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][5],s[40],k = 0;
	
	int start_ind,end_ind,i,j;
	
	gets(s);
	
	while(s[k]!='\0')
	{
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			str[i][j] = s[k];
			k++;
		}
	}
}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c\t",str[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(str[i][j] == 'T')
			{
				start_ind = i;
				end_ind = j;
		 	if(str[start_ind+1][end_ind] == 'O' && str[start_ind+2][end_ind] == 'O')
			{
				printf("<%d %d>\n",start_ind,end_ind);
				printf("<%d %d>",start_ind+2,end_ind);
			}
				
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			
			if(str[i][j] == 'T')
			{
				start_ind = i;
				end_ind = j;
				if(str[start_ind][end_ind+1] == 'O' && str[start_ind][end_ind+2] == 'O' )
				{
					printf("<%d %d>\n",start_ind,end_ind);
					printf("<%d %d>",start_ind,end_ind+2);
				}
				exit(0);
			}
	
	 }
}
	
	
		
	
		
	
}

