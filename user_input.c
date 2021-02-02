#include <stdio.h>


void user_input()
{
	for(;;)
	{
	char user_input = getchar();
	if(user_input == 'Q')
		break;
	}
}



void main()
{
	user_input();
}
