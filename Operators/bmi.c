#include<stdio.h>
int main()
{
	float weight,hight,bmi;
	printf("Enter your weight:");
	scanf("%f",&weight);
	printf("Enter your hight:");
	scanf("%f",&hight);
	bmi=weight/hight*hight;
    printf("The bmi is %f",bmi);	
	
	
}

