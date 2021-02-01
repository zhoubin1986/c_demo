#include <stdio.h>


void install()
{
	printf("install ---->\n");	
}

void other()
{
	printf("other ---->\n");
}

char selection()
{
	char choice;
	do
	{
		switch(choice = getchar())	
		{
			case '1':choice = '1';break;
			case '2':choice = '2';break;
			case '3':choice = '3';break;
			default :break;
		}
	}
	while(choice != '1' && choice != '2' && choice != '3');
	return choice;
}


void menu()
{
	char result;
	printf("1.Install......\n");
	printf("2.other......\n");
	printf("3.Quit......\n");
	result = selection();
	switch(result)	
	{
		case '1':install();break;
		case '2':other();break;
		case '3':exit(0);break;
		default :break; 
	}
}


void main()
{
	menu();
}
