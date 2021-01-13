#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <time.h>

void help()
{
	printf("**********************************************\n");
	printf("**********************************************\n");
	printf("**********************************************\n");
	printf("**********************************************\n");
	
}

char mygetch()
{
	struct termios oldt,newt;
	char ch;
	tcgetattr(STDIN_FILENO,&oldt);	
	newt = oldt;
	newt.c_lflag &= ~( ICANON | ECHO);
	tcsetattr(STDIN_FILENO,TCSANOW,&newt);
	ch = getchar();
	tcsetattr(STDIN_FILENO,TCSANOW,&oldt);
	return ch;
}



int main()
{
	system("clear");
	char ch;
	char str[51];
	int i,count;
	long int start_time,end_time;
	while(1)	
	{
		help();		
		ch = mygetch();
		if(i == 0)
		{
			start_time = time(NULL);
		}
		srand(time(NULL));
		for(i=0;i<50;i++)	
		{
			str[i] = rand() % 26 + 'a';
		}
		str[50] = '\0';
		printf("%s\n",str);
		count = 0;
		for(i=0;i<50;i++)
		{
			ch = mygetch();
			if(ch == str[i])
			{
				printf("%c",ch);		
				count++;
			}
			else
			{
				printf("_");
			}
		}
		end_time = time(NULL);
		printf("\n\ncorrect :%d%c\n",count*100/50,'%');
		printf("used time:%ld\n",end_time-start_time);
		printf("enter ESC exit,space continue\n");
		while(1)
		{
			ch = mygetch();
			if(ch == ' ')
				break;
			if(ch == 27)
				return 0;
		}
	}
	return 0;
}
