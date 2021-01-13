#include <stdio.h>

int main()
{
	char a;
	int b;
	double c;
	char *p1;
	int *p2;
	double *p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;

	printf("%p %p %p\n",p1,p2,p3);
	printf("%p %p %p\n",p1+1,p2+1,p3+1);
	return 0;
}
