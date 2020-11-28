#include<stdio.h>
int main()
{
	int n,i,j,k,l,a[10],a1[10];
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i+=2)
	{
		a1[i]=a[i];
	}
	
	for (i = 1; i <= n; i+=2) 
        {
            for (j = i + 2; j <= n; j+=2) 
            {
                if (a1[i] < a1[j]) 
                {
                    k = a1[i];
                    a1[i] = a1[j];
                    a1[j] = k;
                }
            }
        }
 /*	for(i=1;i<=n;i+=2)
	{
		printf("%d\n",a1[i]);
	}*/
	for(i=2;i<n;i+=2)
	{
		a1[i]=a[i];
	}
		for (i = 2; i < n; i+=2) 
        {
            for (j = i + 2; j < n; j+=2) 
            {
                if (a1[i] > a1[j]) 
                {
                    k = a1[i];
                    a1[i] = a1[j];
                    a1[j] = k;
                }
            }
        }
            
 /*	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",a1[i]);
	}
	for(i=2;i<n;i+=2)
	{
		printf("%d\n",a1[i]);
	}
	*/
	for(i=1;i<=n;i++)
	{
		printf("%d ",a1[i]);
	}
}
