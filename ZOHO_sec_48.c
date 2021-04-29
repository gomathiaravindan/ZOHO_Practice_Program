## Form the number system with only 3 and 4. Find the nth number of the number system.






#include<stdio.h>
int main()
{
	int i,t = 1,flag,rem,temp;
	
	
	while(t<1000)
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
			printf("%d",t);
		t++;
		
	}
	
}
