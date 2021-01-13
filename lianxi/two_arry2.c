#include <stdio.h>

int main()
{
	int score[4][3] = {
											{11,22,33},
											{44,55,66},
											{77,88,99},
											{23,34,45}
										};

	int i,j,count;
	float sum;
	float person_avr[4];
	int low_score[3];
	for(j=0;j<3;j++)
	{
		sum = 0; 
		count = 0;	
		for(i=0;i<4;i++)
		{
			sum += score[i][j];
			if(score[i][j] < 60)
				count++;
		}
		person_avr[j] = sum/4;
		low_score[j] = count;
	}
	for(j=0;j<3;j++)	
	{
		printf("the first %d person:%.2f\n",j,person_avr[j]);
		printf("the first %d person low_score:%d\n",j,low_score[j]);
	}

	return 0;
}
