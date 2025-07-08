#include<stdio.h>
int main()
{
	int currency;
	float inr;
	float usd=84.85;
	float eur=90.00;
	float gbp=105.00;
	printf("Enter your amount:");
	scanf("%d",&currency);
	switch(currency)
	{
		case 1:
			inr=currency*usd;
			printf("\nINR is%f",inr);
		break;
		case 2:
			inr=currency*eur;
			printf("\nINR is%f",inr);
		break;
		case 3:
			inr=currency*gbp;
			printf("\nINR is%f",inr);
		break;
		default :
			printf("\nInvalide");
			
			
	}
}
