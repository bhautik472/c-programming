#include <stdio.h>

int main()
{
	int i=1,exponent,base,ans=1;
	printf("Enter value of base: ");
	scanf("%d",&base);
	printf("Enter value of exponent: ");
	scanf("%d",&exponent);
	
	
	while(i<=exponent)
	{
		ans=ans*base;
		i++;
	}
	printf("%d",ans);
	
	return 0;
}

