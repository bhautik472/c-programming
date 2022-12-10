#include<stdio.h>

int main()
{
	int i=1,n,factcount=0;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
		{
			factcount++;
		}
		i++;
	}
	if(factcount==2)
	{
		printf("Entered Number is Prime.");
	}
	else
	{
		printf("Entered Number is Not Prime.");
	}
	return 0;
}
