#include<stdio.h>

int main()
{
	int basic,hra,da,gross;
	
	printf("Enter value of basic: ");
	scanf("%d",&basic);
	
	if(basic>=10000)
	{
		hra=0.2*basic;
		da=0.8*basic;
		gross=basic+hra+da;
	}
	else if(basic>=20000)
	{
		hra=0.2*basic;
		da=0.9*basic;
		gross=basic+hra+da;
	}
	else if(basic>=30000)
	{
		hra=0.3*basic;
		da=0.95*basic;
		gross=basic+hra+da;
	}
	else
	{
		printf("Invalid Information\n");
	}
	printf("gross=%d",gross);
	return 0;
}
