#include<stdio.h>
int a,b,c;

void add(){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	c=a+b;
	printf("\nAddition is%d",c);
}
void sub(){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	c=a-b;
	printf("\nSubtraction is%d",c);
}
void mul(){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	c=a*b;
	printf("\nMultiplication is%d",c);
}
void div(){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	c=a/b;
	printf("\nDivision is%d",c);
}
int main(){
	add();
	sub();
	mul();
	div();
}
