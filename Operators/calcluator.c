#include<stdio.h>
int main()
{
	int a,b,cal;
	char ch='+';
	printf("Enter first no:");
	scanf("%d",&a);
	printf("Enter second no:");
	scanf("%d",&b);
//	printf("Enter charachter:");
//	scanf("%s",&ch);
	if(ch=='+')
	{
	printf("\nB is%d",b);	
	cal=a+b;	
	printf("\nAddition is%d",cal);
	}
	else if(ch=='-')
	{
		cal=a-b;
	printf("\nSubstraction is%d",cal);
	}
	else if(ch=='*')
	{
		cal=a*b;
	printf("\nMultiplication is%d",cal);
	}
	else if(ch=='/')
	{
		cal=a/b;
	printf("\nDivision is%d",cal);
	}
}
