#include<stdio.h>
int main()
{
	int hour,minute,min;
	printf("Enter hours:");
	scanf("%d",&hour);
	printf("Enter minutes");
	scanf("%d",&minute);
	if(hour>=0&&hour<=24)
	
	{	
	min=60*hour;
	
	
		if(minute>=0&&minute<=59)
		
			min=minute+min;
			printf("Total minute is:%d\n",min);
		}else
		{
			printf("time is invallide\n");
		}
		
	    
}
