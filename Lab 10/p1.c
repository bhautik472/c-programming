#include<stdio.h>

int main()
{
	int n,lastdigit,firstdigit,sum;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	
	sum=firstdigit+lastdigit;
	
	printf("Sum of First and Last digit is = %d",sum);
	
	return 0;
}
