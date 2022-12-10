#include<stdio.h>

int main()
{
	int S1,S2,S3,S4,S5;
	float p;
	
	printf("Enter value of S1,S2,S3,S4,S5: ");
	scanf("%d %d %d %d %d",&S1,&S2,&S3,&S4,&S5);
	
	p=(S1+S2+S3+S4+S5)/5;

	if(p>70)
	{
		printf("Distinction");
	}
	else if(p>=60 && p<70)
	{
		printf("First Class");
	}
		else if(p>=45 && p<60)
	{
		printf("Second Class");
	}
		else if(p>=35 && p<45)
	{
		printf("Pass");
	}
		else if(p>100 && p<0)
	{
		printf("Invalid Input");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
