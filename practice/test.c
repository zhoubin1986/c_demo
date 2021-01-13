#include <stdio.h>


int main()
{
	printf("%d %d %d %d\n",sizeof(short),sizeof(int),sizeof(long),sizeof(long long));
	long a = 1;
	long long b = 1;
	float c = 1;
	double d = 1;
	printf("%ld %lld %f %lf\n",a,b,c,d);
	return 0;
}
