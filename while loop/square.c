#include<stdio.h>
int main()
{
	int i=1;
	int num,square;
	printf("Enter number:");
	scanf("%d",&num);
	while(i<=num)
	{
	square=i*i;
	printf("\n%d",square);	
	i++;
	}
}
