#include <stdio.h>

void main()
{
	int a,b,divisor,multiple;
	do
	{
		printf("please input a and b && a > b > 0 value:");
		scanf("%d%d",&a,&b);
	}
	while(a <= 0 || b <= 0 || a < b ); 
	divisor = b;
	while((a % divisor) != 0 || (b % divisor) != 0)
		divisor--;	
	printf("max_divisor = %d\n",divisor);
/*	multiple = a;	
	while(multiple % a != 0 || multiple % b != 0)
		multiple++;	
*/
	multiple = (a * b) / divisor;
	printf("min_multiple = %d\n",multiple);
}
