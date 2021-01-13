#include <stdio.h>

int main(int argc,char **argv)
{
	char *p[5] = {"hello","world","china","guizhou","guiyang"};
	int i;
	for(i = 0;i < 5;i++)
	{
		printf("%s\t",p[i]);
	}
	printf("\n");
	return 0;
}
