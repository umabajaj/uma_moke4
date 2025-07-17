#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three sides of a Triangle:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		if (a==b && b==c)
		{
			printf("Is the Triangle Equilateral\n");
		}
		else if (a==c||c==b||a==b)
		{
			printf("Is the Triangle is Isosceles\n");
		}
		else 
		{
			printf("Is the Triangle is Scalene\n");
		}
		
}
}
