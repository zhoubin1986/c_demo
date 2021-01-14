#include <stdio.h>


void main()
{
	int x,y,z,mid,dec;
	printf("input x,y,z:\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x < y)
	{
		mid = x;x = y;y = mid;
	}
	if(x < z)
	{
		mid = x;x = z;z = mid;
	}
	if(y < z)
	{
		mid = y;y = z;z = mid;
	}
	printf("input dec number:\n");
	scanf("%d",&dec);
	if(dec >= 0)	
		printf("max= %d\n",x);	
	else
		printf("min = %d\n",z);
}
