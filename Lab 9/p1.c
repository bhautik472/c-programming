#include <stdio.h>

int main()
{
	int n,sum=0,i=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("%d",sum);
	
	return 0;
}
