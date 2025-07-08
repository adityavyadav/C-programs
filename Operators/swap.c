#include<stdio.h>
int main()

{
int a;
int b;
int c;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("\nvalue of a is%d",a);
printf("\nvalue of b is%d",b);
c=a;
a=b;
b=c;

printf("\nAfter swaping value a is%d",a);
printf("\nAfter swaping value b %d",b);

}
