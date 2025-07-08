#include<stdio.h>
int main()
{
	char grade;
	printf("Enter your grade:");
	scanf("%c",&grade);
switch(grade)
{
	case 'A':
		printf("\nExcellent");
	break;
	case 'B':
	printf("\nExcellent");
	break;
	case 'C':
	printf("\nAverage");
	break;
	case 'D':
	printf("\nPoor");
	break;
	case 'F':
	printf("\nFail");
	break;
	default:
	printf("\nInvalide grade.");
	
	}
	
}
