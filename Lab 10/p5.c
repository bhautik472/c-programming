#include<stdio.h>

int main()
{
	int n,digit,reverse;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		reverse=(reverse*10)+digit;
	}		
	printf("%d\n",reverse);
	return 0;
}
