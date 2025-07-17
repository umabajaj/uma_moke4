#include<stdio.h>
void main()
{
	float price,discount=0;
	char isstudent;
	printf("Enter the purchase amount:");
	scanf("%f",&price);
	printf("Are you student?(y/n):\n");
	scanf("%c",&isstudent);
	if (isstudent=='y'||isstudent=='Y'){
		if (price>500)
		discount=0.20*price;
		else 
		discount=0.10*price;
	} else{
		if (price>600)
		discount=0.15*price;
		else 
		discount=0;
	}
	printf("Discount=%2f\n",discount);
	printf("Final price =%2f\n",price-discount);
	}
	
	
