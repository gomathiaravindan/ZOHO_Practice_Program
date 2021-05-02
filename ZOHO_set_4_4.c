#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,count,k,l = 0;
	char s[100] = "1", res[100];
	printf("Enter the row count:");
	scanf("%d",&n);
	
	printf("1\n");
	
	for(i = 1;i<=n;i++)
	{
		count = 0,l = 0;
		for(k = 0,j = 0;s[j]!= '\0';j++)
		{
			if(s[k] == s[j])
			   count++;
			else
			{
				res[l++] = count + '0';
				res[l++] = s[k];
				k = j;
				count = 1;
			}
		}
		res[l++] = count + '0';
		res[l++] = s[k];
		res[l] = '\0';
		printf("%s\n",res);
		strcpy(s,res);
	}
	
	return 0;
	
	
}
