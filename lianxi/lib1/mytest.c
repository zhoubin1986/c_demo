#include <stdio.h>
#include "mylib.h"

int main(int argc,char *argv[])
{
	int a,b;
	a = max(1,10);		
	b =min(1,10);	
	printf("max:%d\nmin:%d\n",a,b);
	return 0;
}
