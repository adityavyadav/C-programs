#include<stdio.h>
int main()
{
	int id;
	float unit,charge,bill;
	printf("Enter your id:");
	scanf("%d",&id);
	printf("Enter your unit:");
	scanf("%f",&unit);
	if(unit<199)
	{
		charge=unit*1.20;
		
	}else if(unit>=200&&unit<=400){
	
	charge=unit*1.50;
}else if(unit>=400&&unit>=600)

{
charge=unit*1.80;

}else if(unit>600)
{
	charge=unit*2.00;
}
if(charge>400){
	bill=charge*.15+charge;
	printf("The total bill is%f",bill);
}
if(charge<100)
{
	bill=100;
	printf("Total charge is%f",bill);
}
}
