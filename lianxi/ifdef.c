#include <stdio.h>
//#define AAA

int main(int argc,char *argv)
{
	#ifdef AAA
		printf("hello111\n");
	#else
		printf("hello222\n");
	#endif
	return 0;
}
