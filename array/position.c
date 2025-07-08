#include<stdio.h>
int main()
{
	int number[5]={22,33,4,76,42};
	int i,num;
	printf("\nEnter number:");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
	if(number[i]==num){
		printf("\nnumber %d found at%d",num,i);
		break;
 }
	
	}
}

