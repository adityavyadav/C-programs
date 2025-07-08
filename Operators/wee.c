#include<stdio.h>
int main()
{
	int day;
	printf("Enter day:");
	scanf("%d",&day);
	if(day==1)
	{
		printf("\nSunday.");
		
	}else if(day==2)
	{
		printf("\nMonday");
		
	}else if(day==3)
	{
		printf("\nTuesday.");
		
	} else if(day==4)
	{
		printf("\nWensday.");
		
	}else if(day==5)
	{
		printf("\nThursday.");
	}else if(day==6)
	{
		printf("\nFriday");
		
	}else if(day==7)
	{
		printf("\nSaturday");
		
	}else
	{
		printf("\nNot valid");
	}
}
