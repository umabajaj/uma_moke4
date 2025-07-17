# include<stdio.h>
void main()
{
	int i,n, num,digit,sum,temp,count;
	printf("Enter the starting number(i):");
	scanf("%d",&i);
	printf("Enter the ending number(n):");
	scanf("%d",&n);
	printf("Armstrong numbers between%d and %d are :\n",i,n);
	for(int j=i;j<=n;j++){
		temp=j;
		count=0;
		while(temp!=0){
			temp/=10;
			count++;
		}
		temp=j;
		sum=0;
		while(temp!=0)
		{
			digit=temp%10;
			sum+=pow(digit,count);
			temp/=10;
		}
		if (sum==j)
		{
			printf("%d",j);
		}
	}
}