## Given a few pairs of names in the order child, father. The input is a person name and level 
number. The output should be the number of children in that particular level for the person given.
Example:
Input:
[
{Ram, Syam},
{Akil, Syam},
{Nikil, Ram},
{Subhash, Ram},
{Karthik, Akil}
];
Syam 2
Output: 3 (Syam has Ram and Akil in level 1 and in level 2 he have Nikil, Subhash, Karthik. So the 
answer is 3).






#include<stdio.h>
#include<string.h>
struct relation
{
	char child[50][50];
	char father[50][50];
	char sons[30][30]
};

int main()
{
	int n,i,j,ind[30],count = 0,count1=0,lvl,count2=0,k=0,count3=0;
	struct relation rel[100];
	char str[30],chd[30],person[30];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%s",rel[i].child);
		scanf("%s",rel[i].father);
	}
	//printf("Enter the parent to find the grandchildren: ");
	//scanf("%s",str);
	
	printf("Enter the person name and the level:");
	scanf("%s %d",person, &lvl);
	
	for(i=0;i<n;i++)
	{
		printf("<%s, %s>\n",rel[i].child,rel[i].father);
	}
	
	if(lvl == 1)
	{
	
		for(i=0;i<n;i++)
		{
			if(strcmp(rel[i].father,person) == 0)
			{
				strcpy(rel[count2].sons, rel[i].child);
				count2++;
				
				
			}
		}
		
		printf("%d",count2);
	}
		else if(lvl == 2)
		{
			for(i=0;i<n;i++)
			{
				if(strcmp(rel[i].father,person) == 0)
				{
					strcpy(rel[count2].sons, rel[i].child);
					count2++;
					
					
				}
			}
		
		for(i=0;i<count2;i++)
		{
			//printf("%s",rel[i].sons);
			
			for(j=0;j<n;j++)
			{
				if(strcmp(rel[i].sons,rel[j].father) == 0)
				{
					count3++;
				}
			}
		}
		printf("%d",count3);
/*	for(i=0;i<n;i++)
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
	
	printf("%d\n",count);*/
	
	return 0;
}
}
