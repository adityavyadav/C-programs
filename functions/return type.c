#include<stdio.h>
int c,d;
void add(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
    return a+b;
	printf("\nAddition is%d");
}
void sub(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	return a-b;
	printf("\nSubtraction is%d");
}
void mul(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	return a*b;
	printf("\nMultiplication is%d");
}
void div(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	return a/b;
	printf("\nDivision is%d");
}
int main(){
	add();
	sub();
    mul();
    div();
}
