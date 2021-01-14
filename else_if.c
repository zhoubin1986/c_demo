#include <stdio.h>

void main()
{
	int x;
	printf("input x:\n");
	scanf("%d",&x);
	if(x < 6)
		printf("x < 6\n");
	else if(x < 15)
		printf("6 <= x < 15\n");
	else
		printf("x >= 15\n");
}
