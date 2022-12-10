#include<stdio.h>

int main()
{
	int no1,no2;
	printf("Enter value of no1,no2: ");
	scanf("%d %d",&no1,&no2);
	
	if(no1<=no2)
	{
		while(no1<=no2)
		{
			if(no1%2==0){
			
			printf("%d\n",no1);
			}
			no1++;
		}	
	}
	else
	{
		while(no2<=no1)
		{
			if(no2%2==0)
			{
				printf("%d\n",no2);	   
			}		
		no2++;
		}	
	}	
	return 0;
}
