#include<stdio.h>

int main()
{
	int mark[100],size,i;
	
	printf("Enter value of size: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
	printf("Enter array element=");
	scanf("%d",&mark[i]);
	}
	for(i=0;i<size;i++)
	{
	printf("%d\n",mark[i]);
	}
	return 0;
}
