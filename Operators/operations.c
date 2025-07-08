#include<stdio.h>
int main()
{
	int a,b,res;
	char ch;
	printf("Enter character:");
	scanf("%s",&ch);
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	
	
	switch(ch)
	{
    case '+':
    	res=a+b;
    	printf("\nAddition is%d",res);
    break;
    case '-':
    	res=a-b;
    	printf("\nSubstracton is%d",res);
    break;
    case '*':
    	res=a*b;
    	printf("\nMultiplication is%d",res);
    break;
    case '/':
    res=a/b;
	printf("\nDivision is\n",res);
	break;
	default:
		printf("Invallide.");
	}
}
