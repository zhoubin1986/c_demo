#include <stdio.h>

int main()
{
	int i,j,k;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=(100-5*i)/3;j++)
		{
			k = 100-i-j;
				if((k%3 == 0) && ((5*i+3*j+k/3) == 100))
				{
					printf("gongji:%d  muji:%d  xiaoji:%d\n",i,j,k);
				}
		}
	}
	return 0;
}
