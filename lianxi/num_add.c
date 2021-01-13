
#include <stdio.h>

int main()
{
	int i = 3;
	int num;
	num = (++i) + (++i) + (++i); 	//left connect..
	printf("num=%d  i=%d\n",num,i);
	return 0;
}
