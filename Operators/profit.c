#include<stdio.h>
int main()
{
	int a,b,sub;
	printf("Enter cost price:");
	scanf("%d",&a);
	printf("Enter selling price:");
	scanf("%d",&b);
	if(b>a)
	{
	sub=b-a;	
	printf("He made a profit%d",sub);
		
	}else{
		printf("He incurred loss%d",sub);
	}
}
