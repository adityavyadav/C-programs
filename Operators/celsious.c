#include<stdio.h>
int main()
{
	int temp;
	float fahrenhiet,celsious;
	printf("Enter Celsious:");
	scanf("%f",&celsious);
	printf("Enter the temprature:");
	scanf("%d",&temp);
    switch(temp)
    {
    	case 1:
    		fahrenhiet=(celsious*9/5)+32;
    		printf("\nFahrenhiet is%f",fahrenhiet);
    	break;
    	case 2:
    		fahrenhiet=(celsious-32)*5/9;
    		printf("\nCelsious is%f",fahrenhiet);
    	break;

	}
}
