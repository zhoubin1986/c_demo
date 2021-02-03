#include <stdio.h>

void main()
{
	int a,b,m,r;
	do
	{
		printf("please input a b value and a > b >0:");
		scanf("%d%d",&a,&b);
	}while(a <= 0 || b <= 0 || a > b);
	m = a * b;
	do
	{
		r = b % a;
		b = a;
		a = r;
	}while(r != 0);
	
	printf("max_divisor = %d\n",a);
	printf("min_multiple = %d\n",m/a);	//not a*b/r
}
