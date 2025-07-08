#include<stdio.h>
int main()
{
	int i=1;
	int num,result=1;
	printf("Enter number:");
	scanf("%d",&num);
	while(i<=num)
	{
	result=i*result;
	i++;
	}
	printf("\n%d",result);
}
