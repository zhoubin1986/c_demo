#include <stdio.h>

int main()
{
	int i;
	int a[][3] = {{1,2,3},{4,5,6}};
	printf("%d  %d  %d  %d\n",a[0][0],a[0][1],a[0][2],a[1][0]);
	return 0;
}
