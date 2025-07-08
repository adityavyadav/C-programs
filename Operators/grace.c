#include<stdio.h>
int main()
{
	int sub;
	int cls;
	
	printf("Enter your class:");
	scanf("%d",&cls);
	printf("Enter your sub:");
	scanf("%d",&sub);
	if(sub>3&&cls==1)
	{
		printf("No grace any marks.");
	}else if(sub<=3&&cls==1)
	{
		printf("He get 5 marks in per subject.");
	}else if(sub>2&&cls==2)
	{
		printf("No any grace marks.");
	}else if(sub<=2&&cls==2)
	{
		printf("He get 4 marks per subject.");
	}else if(sub>1&&cls==3)
	{
		printf("No any grace marks.");
	}else if(sub<=1&&cls==3)
	{
		printf("He get 5 marks in per subject.");
	}
	
}
