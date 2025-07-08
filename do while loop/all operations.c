#include<stdio.h>
int main(){

do{
	float a,b;
	int choice,res;

    printf("\n1.for addition");
    printf("\n2.for subtraction");
    printf("\n3.for multiplicaction");
    printf("\n4.for division");

    printf("\nEnter choice:");
	scanf("%d",&choice);
	printf("\nEnter number1:");
	scanf("%f",&a);
	printf("\nEnter number2:");
	scanf("%f",&b);
	switch(choice)
	{
    case 1:
    	res=a+b;
    	printf("\nAddition is%d",res);
    break;
    case 2:
    	res=a-b;
    	printf("\nSubstracton is%d",res);
    break;
    case 3:
    	res=a*b;
    	printf("\nMultiplication is%d",res);
    break;
    case 4:
    res=a/b;
	printf("\nDivision is%d",res);
	break;
	default:
		printf("Invallide.");
	}
}while(choice!=5);
}

