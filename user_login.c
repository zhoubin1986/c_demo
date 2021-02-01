#include <stdio.h>

void user_login()
{
	int i;
	char password[8];
	for(i=0;i<3 && strcmp(password,"abcd1111");i++)
	{
		printf("please input password:");	
		gets(password);
	}
	if(i == 3)
	{
		printf("err\n");
		return;
	}
	else
		printf("input right\n");	
}



void main()
{
	user_login();	
}
