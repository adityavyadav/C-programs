#include<stdio.h>
int main()
{
	int i,num,result=1;
	printf("Enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	result=i*result;
	}
	printf("\n%d",result);
}
