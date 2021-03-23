## Write a program to sort the elements in odd positions in descending order and elements in 
ascending order 
Eg 1: Input: 13,2 4,15,12,10,5
 Output: 13,2,12,10,5,15,4
Eg 2: Input: 1,2,3,4,5,6,7,8,9
 Output: 9,2,7,4,5,6,3,8,1 








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
