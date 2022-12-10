#include<stdio.h>

int main()
{
	int i,no,evencount=0,oddcount=0;
		
	while(i<10)
	{
		printf("Enter value of n:  ");
		scanf("%d",&no);
		if(no%2==0)
		{
		evencount++;
		}
		else
		{
			oddcount++;	
		}
		i++;
	}
	printf("evencount = %d\n",evencount);
	printf("oddcount = %d",oddcount);
	return 0;
}
