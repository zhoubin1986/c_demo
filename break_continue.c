#include <stdio.h>


/*
void main()
{
	int r;
	double area;	
	for(r = 1;r <= 10;r++)
	{
		area = 3.1416 * r * r;
		if(area >= 120)
			break;
		printf("area = %f\n",area);
	}
	printf("r-> = %d\n\n\n",r - 1);

	for(r = 1;r <= 10;r++)
	{
		area = 3.1416 * r * r;
		if(area < 120)
			continue;
		printf("area = %f\n",area);
	}
	printf("r-> = %d\n",r - 1);

}
*/



void main()
{
	int r;
	double area;

	for(r = 1;r <= 10;r++)
	{
		area = 3.1416 * r * r;
		if(area >= 120)	
			break;
		printf("area = %f\n",area);
		printf("r-> = %d\n",r);
	}
	printf("\n\n");
	for(r = 1;r <= 10;r++)
	{
		area = 3.1416 * r * r;
		if(area < 120)
			continue;
		printf("area = %f\n",area);
		printf("r-> = %d\n",r);
	}
}
