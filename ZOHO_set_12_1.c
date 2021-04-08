/*Given two numbers a and b both < 200 we have to find the square numbers which lie 
between a and b(inclusive) 
eg) i/p a = 20;b = 100;
 o/p 25,36,49,64,81,100*/


#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	
	scanf("%d %d",&a,&b);
	
	for(i=sqrt(a);i<=sqrt(b);i++)
	{
		if(i * i > a)
		{
			printf("%d ",i * i);
		}
	}
}
