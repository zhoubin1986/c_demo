#include <stdio.h>

void main()
{
	int a,b,m,r;
	int temp;
	do
	{
		printf("please input a b value and a > b >0:");
		scanf("%d%d",&a,&b);
	}while(a <= 0 || b <= 0 || a > b);
	m = a * b;
	do
	{
		r = b % a;
		if(0 == r)
			temp = a;
		b = a;
		a = r;
	}while(r != 0);
	printf("max_divisor = %d\n",temp);
	printf("min_multiple = %d\n",m/temp);	//not a*b/r
}
