## Given a two dimensional array of string like 
 <”luke”, “shaw”>
 <”wayne”, “rooney”>
 <”rooney”, “ronaldo”>
 <”shaw”, “rooney”> 
Where the first string is “child”, second string is “Father”. And given “ronaldo” we have to find his 
no of grandchildren Here “ronaldo” has 2 grandchildren. So our output should be 2






#include<stdio.h>
#include<string.h>
struct relation
{
	char child[50][50];
	char father[50][50];
};

int main()
{
	int n,i,j,ind[30],count = 0,count1=0;
	struct relation rel[100];
	char str[30],chd[30];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",rel[i].child);
		scanf("%s",rel[i].father);
	}
	printf("Enter the parent to find the grandchildren: ");
	scanf("%s",str);
	
	for(i=0;i<n;i++)
	{
		printf("<%s, %s>\n",rel[i].child,rel[i].father);
	}
	
	for(i=0;i<n;i++)
	{
		if(!(strcmp(rel[i].father,str)))
		{
			
			ind[count1] = i;
			count1++;
		
		}
		
	}
	
	for(i=0;i<count1;i++)
	{
		
			for(j=0;j<n;j++)
			{
				if(!(strcmp(rel[ind[i]].child,rel[j].father)))
				{
					count++;
				}
	    	}
	}
	
	printf("%d\n",count);
	
	
}
