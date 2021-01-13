#include <stdio.h>

int main()
{
	double a[10];
	double *p;
	p = &a;
	printf("%d\n",(int)(p+2) - (int)p);
	return 0;
}
