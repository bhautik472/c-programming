#include<stdio.h>

int main()
{
	int i=1,n,a,sum=0;
	float avg;
	
	printf("Enter value to scan as many number number you want : ");
	scanf("%d",&n);
		
	while(i<=n)
	{
		printf("Enter number: ");
		scanf("%d",&a);
		
		sum=sum+a;
		i++;	
    }
    avg=sum/n;
    
    printf("Sum of given numbers is %d\n",sum);
    printf("Avg of given numbers is %f",avg);
    
    return 0;
}
