
#include <stdio.h>

int main()
{
	int i,j;
	for(i = 1;i < 10;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);	
		}	
		printf("\n");
	}
	return 0;
}


/*
#include <stdio.h>

int main()
{
	
	int i,j;
	for(i = 9;i > 0;i--)
	{
		for(j = i;j > 0;j--)
		{
			printf("%d*%d=%d\t",i,j,i*j);	
		}	
		printf("\n");
	}
	return 0;
}
*/
