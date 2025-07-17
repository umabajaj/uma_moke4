#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the three number:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf(" Is the Greatest No:%d\n",a);
		}
		else
		{
			printf("  Is the Gratest No:%d\n",c);
		}
	}
		else
		{
			if (b>c)
			{
				printf("Is the Greatest No:%d\n",b);
			}
			else
			{
				printf("Is the Greatest No:%d\n",c);
			}
		}
	}