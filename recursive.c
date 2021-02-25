#include <stdio.h>

/**
**int --> ''
**/
void convert(int x)
{
	int i;
	if((i = x/10) != 0)	
		convert(i);
	putchar(x%10 + '0');
}



void main()
{
	int number;
	printf("please input int number:");
	scanf("%d",&number);
	if(number < 0)
	{
		putchar('-');
		number = -number;	
	}
	convert(number);
	putchar('\n');
}

