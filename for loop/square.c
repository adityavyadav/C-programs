#include<stdio.h>
int main()
{
	int i,num,square;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	square=i*i;
	printf("\n%d",square);	
	}
}
