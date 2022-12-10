#include<stdio.h>

int main()
{
	int n,digit;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		printf("Digit=%d\n",digit);
	}
	return 0;
}
