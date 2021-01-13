#include <stdio.h>
int calc_mult(int a,int b)
{
	int mult;
	mult = a * b;	
	return mult;
}

int main()
{
	int result;
	result = calc_mult(1+2,3);	
	printf("result:%d\n",result);
	return 0;
}
