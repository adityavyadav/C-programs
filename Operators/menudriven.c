#include<stdio.h>
int main()
{
	int num,cal;
	printf("Enter number:");
	scanf("%d",&num);
		
	switch(num)
	{
		cal=num*num;
		case 1:
			cal=num*num;
			printf("\nThe number of square is%d",cal);
			break;
		case 2:
		cal=num*num*num;
			printf("\nThe number of cube is%d",cal);
			default:
				printf("\nExit");
	}
}
