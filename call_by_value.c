#include <stdio.h>
int Max(int,int);

int main()
{
	int m,n;
	m = 2,n = 1;
	printf("the big number:%d\n",Max(m,n));	
}

int Max(int a,int b)
{
	return(a>b?a:b);
}
