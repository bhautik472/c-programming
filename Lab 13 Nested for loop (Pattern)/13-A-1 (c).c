#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,n;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
