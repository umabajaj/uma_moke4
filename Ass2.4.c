#include<stdio.h>
void main()
{
	int n;
	printf("Total Marks in Exam:");
	scanf("%d",&n);
	if (n>75)
	{
		printf("Result is Distinction");
	}
	else if(n>60)
	{
		printf("Result is First Class");
	}
	else if(n>50)
	{
		printf("Result is Second Class");
	}
	else if (n>=40)
	{ 
	printf("Result is Third Class");
	}
	else
	{
		printf("Result is Fail");
	}
	}