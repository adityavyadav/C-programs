#include<stdio.h>
int main()
{
	float length,hight,area,perimeter;
	printf("Enter length of rectangle:");
	scanf("%f",&length);
	printf("Enter hight of rectangle:");
	scanf("%f",&hight);
	area=length*hight;
	perimeter=2*(length+hight);
	printf("\narea of rectangle is%f",area);
	printf("\nperimeter of rectangle is%f",perimeter);
	if(area>perimeter||perimeter>area)
	{
	printf("\nArea is greater than perimeter.");
	}else{
		printf("\nPerimeter is greater than area.");
	}
		
}
