#include <stdio.h>
void swap(int *,int *);

void main()
{
	int a =2;
	int b = 12;
	printf("not swap: a = %d,b = %d\n",a,b);
	printf("%x,%x\n",&a,&b);
	swap(&a,&b);
	printf("swapped: a = %d,b = %d\n",a,b);
	printf("%x,%x\n",&a,&b);
}

void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
