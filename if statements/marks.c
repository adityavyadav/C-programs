#include<stdio.h>
int main()
{
	int marks1,marks2,marks3,average;
	printf("Enter your marks:");
	scanf("%d",&marks1);
	printf("Enter your marks:");
	scanf("%d",&marks2);
	printf("Enter your marks:");
	scanf("%d",&marks3);
	average=(marks1+marks2+marks3)/3;
	printf("The average is %d",average);
	
	if(average>=40)
	{
		printf("The student is pass.");

	}else{
		printf("The student is fail.");
	}
}
