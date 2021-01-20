#include <stdio.h>

void main()
{
	int gewei,shiwei,baiwei;
	int qianwei,wanwei,shiwan;
	int weishu,num;

/*	printf("please input 0 ~ 999999:");
	scanf("%d",&num);
	if(num > 999999)	
		printf("please reinput 0~ 999999:");
		scanf("%d",&num);
//	scanf("%d",&num); */

//	scanf("%d",&num);	
	while(1)
	{
		printf("please input 0 ~ 999999:");
		scanf("%d",&num);
		if(num <= 999999)
			break;
	}
	if(num > 99999)
		weishu = 6;	
		else if(num > 9999)
			weishu = 5;
			else if(num > 999)
				weishu = 4;
				else if(num > 99)
					weishu = 3;
					else if(num >9)
						weishu = 2;
						else
							weishu = 1;
	printf("weishu = %d\n",weishu);
	shiwan = num / 100000;
	wanwei = (num - shiwan * 100000) / 10000;
	qianwei = (num -shiwan * 100000 -wanwei * 10000) / 1000;
	baiwei = (num - shiwan * 100000 - wanwei * 10000 -qianwei * 1000) /100;
	shiwei = (num - shiwan * 100000 - wanwei * 10000 -qianwei * 1000
																	- baiwei * 100) / 10;
	gewei = (num - shiwan * 100000 - wanwei * 10000 - qianwei * 1000
	
																- baiwei * 100 - shiwei * 10); 
	switch(weishu)
	{
		case 1:printf("gewei = %d\n",gewei);
						break;
		case 2:printf("shiwei = %d,gewei = %d\n",shiwei,gewei);
						break;	
		case 3:printf("baiwei = %d,shiwei = %d,gewei = %d\n",baiwei,shiwei
																													,gewei);
						break;
		case 4:printf("qianwei = %d,baiwei = %d,shiwei = %d\
																														,gewei = %d\n",
                                                                    qianwei																												,baiwei,shiwei,gewei);
						break;
		case 5:printf("wanwei = %d,qianwei = %d,baiwei = %d,shiwei = %d,gewei = %d\n",wanwei,qianwei,baiwei,shiwei,gewei);
						break;  
		case 6:printf("shiwan = %d,wanwei = %d,qianwei = %d,baiwei = %d,shiwei ="                "%d,gewei = %d\n",shiwan,wanwei,qianwei,baiwei,shiwei,gewei);	
						break;  
		default:
					printf("err\n");  
	}
}
