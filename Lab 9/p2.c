#include <stdio.h>

int main()
{
	int n,mul,i=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		mul=n*i;
		printf("\n %d*%d=%d",n,i,n*i);
		i++;
	}
	return 0;
}
