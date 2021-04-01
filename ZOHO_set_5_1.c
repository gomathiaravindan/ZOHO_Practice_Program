#include<stdio.h>

struct friends{
	
	int num;
	char fof[40][40];
	
};

struct main_fri{
	struct friends fnd1[40];
	char fri[40][40];
};

int main()
{
	int i,n,j,k=0,ind,l;
	scanf("%d",&n);
	struct main_fri fnd[40];
	

	
	
	for(i=0;i<n;i++)
	{
		scanf("%s",fnd[i].fri);
		scanf("%d",&fnd[i].fnd1[i].num);
		
		for(j = 0;j<fnd[i].fnd1[i].num;j++)
		{
			scanf("%s",fnd[j].fnd1[i].fof);
		}
	}
	
	/*for(i = 0;i<n;i++)
	{
		for(j = 0;j<fnd[i].fnd1[i].num;j++)
		{
			printf("%s, ",fnd[j].fnd1[i].fof);
		}
	}*/
	return 0;
}

