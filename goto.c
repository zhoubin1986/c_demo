#include <stdio.h>

int main(int argc,char *argv[])
{
	printf("hello--1\n");
	goto aaa;
	printf("hello--2\n");
	printf("hello--3\n");
	aaa:
	printf("hello--4\n");

	return 0;
}
