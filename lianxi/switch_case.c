#include <stdio.h>

int main()
{
	int n;
	printf("input a number:\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wenesday\n");
			break;
		case 4:
			printf("Turesday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
	 		printf("Sunday\n");
			break;
		default:
			printf("Erro Input\n");	
			break;	
	}

	return 0;
}
