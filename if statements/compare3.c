#include<stdio.h>
int main()

{
	int num1,num2,num3;
	printf("Enter first no.:");
	scanf("%d",&num1);
	printf("Enter second no.:");
	scanf("%d",&num2);
	printf("Enter third no.:");
	scanf("%d",&num3);
	if(num1>num2&&num1>num3)
	{
		printf("Num1 is greater than both.");
	}
	if(num2>num1&&num2>num3)
	{
		printf("Num2 is greater than both.");
	}
	if(num3>num1&&num3>num2)
	{
		printf("Num3 is greater than both.");
	}
	}
