#include <stdio.h>

int main()
{
	int a,b,*p1,*p2;
	p1 = &a;
	p2 = &b;
	printf("input a and b:\n");
	scanf("%d%d",p1,p2);
	printf("a=%d b=%d\n",a,b);
	return 0;
}
