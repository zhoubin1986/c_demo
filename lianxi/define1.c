#include <stdio.h>
#define P(m,n) m*n


int calc_mult(int a,int b)
{
	int mult;
	mult = a * b;	
	return mult;
}

int main()
{
	int result,aa;
	aa = P(1+2,3);
	result = calc_mult(1+2,3);	
	printf("result:%d\n",result);
	printf("aa:%d\n",aa);
	return 0;
}
