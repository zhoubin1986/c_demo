#include <stdio.h>
int square(int);
int cube(int);

int main()
{
	int a = 2;
	int b = 4;
	printf("%d  %d\n",square(a),a);
	printf("%d  %d\n",cube(b),b);
}

int square(int x)
{
	x = x * x;
	return x;
}


int cube(int y)
{
	y = y * y * y;
	return y;
}
