#include <stdio.h>

void main()
{
	int c,sex,weight;
	printf("please input sex and weight\n");
	scanf("%d %d",&sex,&weight);
	if(sex >= 0)
	{
		if(weight > 120)
		{
			c = 200;
			printf("shuxueliang=200\n");
		}
		else
		{
			c = 180;
			printf("shuxueliang=180\n");
		}
	}
	else
	{
		if(weight > 100)
		{
			c = 150;
			printf("shuxueliang=150\n");
		}
		else
		{
			c = 120;
			printf("shuxueliang=120\n");
		}
	}
}
