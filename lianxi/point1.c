#include <stdio.h>


int main()
{
	int a = 0x1234,b = 0x3456;
	char *p1,*p2;
	printf("a=0x%0x b=0x%0x\n",a,b);
	p1 = (char *)&a;	
	p2 = (char *)&b;
	printf("a:0x%0x,b:0x%0x\n",*p1,*p2);
	printf("p1:%p,p2:%p\n",p1,p2);
	printf("&a:%p &b:%p\n",&a,&b);

	p1++;
	p2++;
	printf("\n\na->0x%0x,b->0x%0x\n",*p1,*p2);
	printf("p1->%p,p2->%p\n",p1,p2);
	printf("&a->%p,&b->%p\n",&a,&b);

	return 0;
}
