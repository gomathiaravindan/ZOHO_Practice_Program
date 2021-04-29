#include<stdio.h>
int main()
{
	int i,t = 1,flag,rem,temp,n,count= 0;
	
	printf("Enter the nth number to print:");
	scanf("%d",&n);
	while(t<1000 && count != n)
	{
		temp = t;
		flag = 1;
		while(temp > 10)
		{
			rem = temp % 10;
			temp/=10;
			if(rem!=3 && rem != 4)
				flag = 0;
		}
		if((temp == 3 || temp == 4) && flag == 1)
			count++;
		t++;
		
	}
	printf("%d",t);
}
