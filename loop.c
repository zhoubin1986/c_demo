#include <stdio.h>
int m = 2;

int loop()
{
	{
		int i,m;
		m = 20;
		for(i = m;i < m;i++)
			printf("hello world\n");
	}
}


void main()
{
	loop();
}
