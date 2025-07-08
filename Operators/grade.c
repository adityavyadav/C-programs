#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	{
		printf("\nGrade A.");
	}else if(marks>=70&&marks<=84)
	{
	    printf("\nGrade B.");	
	}else if(marks>=60&&marks<=69)
	{
		printf("\nGrade C.");
		
	}else if(marks>=40&&marks<=59)
	{
		printf("\nGrade D");
	}else if(marks<40)
	{
		printf("\nFail");
	
	}
}
