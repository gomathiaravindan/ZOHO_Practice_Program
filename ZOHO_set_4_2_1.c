## Print the pattern
Input N = 3 M = 3
Output:
  
	XXX
	X0X
	XXX
Input N = 6 M = 7
	
	XXXXXX
	X0000X
	X0XX0X
	X0XX0X
	X0XX0X
	X0000X
	XXXXXX






#include<stdio.h>
int main()
{
	int N,M,i,j;
	
	scanf("%d %d",&N,&M);
	
	for(i=0;i<M;i++)
	{
		for(j = 0;j<N;j++)
		{
			if(i==0)
			{
				printf("X");
			}
			else if(i == 1 || i == M - 1)
			{
				if(j == 0 || j == N-1)
				{
					printf("X");
					
				}
				else
					printf("0");
			}
			
			else if(i>1 || i< M-1)
			{
				if(j==0 || j == N-1)
				{
					printf("X");
				}
				else if(j == 1 || j == N-2)
				{
					printf("0");
				}
				else
				{
					printf("X");
				}
			}
		}
		printf("\n");
	}
}
