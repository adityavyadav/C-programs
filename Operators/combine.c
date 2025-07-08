#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	
	int add=num1+num2;
	printf("\nAddition Of %d and %d is %d",num1,num2,add);
    int sub=num1-num2;    
    printf("\nSubstraction Of %d and %d is %d",num1,num2,sub);
	int mul=num1/num2;
	printf("\nMultiplication Of %d and %d is %d",num1,num2,mul);
	int div=num1/num2;
	printf("\nMultiplication Of %d and %d is %d",num1,num2,div);
	float rem=num1%num2;
	printf("\nReminder Of %d and %d is %f",num1,num2,rem);
	
	
}
