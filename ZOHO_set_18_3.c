## Compiuting value of sin (x)
Input x = 30 n = 10
output = 0.5
Hint : The equation sin(x) = x – x^3 / 3! + x^5 / 5! – …. 






#include<stdio.h>
#include<math.h>
int main()
{
	int x1,temp;
	float val,x,sinval,sinx,deno,acc = 0.0001;
	
	scanf("%f",&x);
	int i = 1;
	
	x = x * (3.142 / 180.0);
	x1 = x;
	sinx = x;
	sinval = (float)sin(x);
	do{
		deno = 2 * i * (2 * i + 1);
		
		x1 = -x1 * x * x/deno;
		sinx = sinx + x1;
		i++;
	}while(acc<= sinval - sinx);
	
	printf("%.1f",sinx);
}
