#include<stdio.h>
int main()
{
	int l,n,i,j,dis,max = 0,sum = 0;
	
	printf("Initial literes of petrol:");
	scanf("%d",&l);
	
	
	printf("Total no of the petrol bunks:");
	scanf("%d",&dis);
	int d[dis];
	
	printf("Enter the distance of each petrol bunk:");
	for(i = 0;i<dis;i++)
	{
		scanf("%d",&d[i]);
		if(max < d[i])
		{
			max = d[i];
		}
	}
	
	int cap[max+1];
	printf("Enter the capacity of each petrol bunk:");
	
	for(i=0;i<dis;i++)
	{
		scanf("%d",&cap[d[i]]);
	}
	
	/*for(i=0;i<dis;i++)
	{
		printf("%d: %d",d[i],cap[d[i]]);
	}*/
	
	if(l == 0)
	{
		printf("He can't drive!!");
	}
	else{
		
	
	
	sum = l - d[0];
	
	for(i=0;i<dis;i++)
	{
		sum = sum  + cap[d[i]];
		sum = sum - d[i+1];
	}
	printf("Remaining petrol in car is %d litres",sum);
     }
}
