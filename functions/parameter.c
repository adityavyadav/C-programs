#include<stdio.h>
int c,d;
void add(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	int c=a+b;
	printf("\nAddition is%d",c);
}
void sub(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	int c=a-b;
	printf("\nSubtraction is%d",c);
}
void mul(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	int c=a*b;
	printf("\nMultiplication is%d",c);
}
void div(int a,int b){
	printf("\nEnter 1st value:");
	scanf("%d",&a);
	printf("\nEnter 2nd value:");
	scanf("%d",&b);
	int c=a/b;
	printf("\nDivision is%d",c);
}
int main(){
	add(c,d);
	sub(c,d);
    mul(c,d);
    div(c,d);
}
