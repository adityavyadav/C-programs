#include<stdio.h>
int main()
{
	int num;
	printf("Enter the no.:");
	scanf("%d",&num);
	if(num%10==0)
	{
	printf("It is multiple of ten.");
	}else{
	printf("It is not multiple of ten.");
	}
}
