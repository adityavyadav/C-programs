#include<stdio.h>
int main()
{
	float principal;
	float rate;
	float time,SI;
	
	printf("Enter the principle:");
	scanf("%f",&principal);
	printf("Enter the rate:");
	scanf("%f",&rate);
	printf("Enter the time:");
	scanf("%f",&time);
	SI=principal*rate*time/100;
	printf("total ammount is %f",SI);
}
