#include <stdio.h>

int main()
{
	int score[4][3] = {
											{11,22,33},
											{44,55,66},
											{77,88.99},
											{23,34,45}
										};

	int i,j,sum;
	int person_avr[4];
	for(i=0;i<4;i++)
	{
		sum = 0; //must put on there
		for(j=0;j<3;j++)
		{
			sum += score[i][j];
		}
		person_avr[i] = sum/3;
	}
	for(i=0;i<4;i++)	
	{
		printf("the first %d person:%d\n",i,person_avr[i]);
	}


	return 0;
}
