#include <stdio.h>

int main()
{
	int score[4][3] = {
											{11,22,33},
											{44,55,66},
											{77,88,99},
											{23,34,45}
										};

	int i,j,sum,count;
	int person_avr[4];
	int low_score[3];
	for(i=0;i<4;i++)
	{
		sum = 0; 
		count = 0;	
		for(j=0;j<3;j++)
		{
			sum += score[i][j];
			if(score[i][j] < 60)
				count++;
		}
		person_avr[i] = sum/3;
		low_score[i] = count;
	}
	for(i=0;i<4;i++)	
	{
		printf("the first %d person:%d\n",i,person_avr[i]);
		printf("%the first %d person low_score:%d\n",i,low_score[i]);
	}

	return 0;
}
