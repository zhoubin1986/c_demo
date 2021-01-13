#include <stdio.h>

int main()
{
	int a = -8;
	unsigned int b = 7;
	if(a + b < 0)	
		printf("a+b<\n0");
	else
		printf("a+b>=0\n");
	printf("a+b=0x%x\n",a+b);
	printf("a+b=%d\n",a+b);
	return 0;
}

