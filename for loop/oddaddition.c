#include<stdio.h>
int main()
{
int i,num,sum=0;
	printf("Enter first no    .:");
	scanf("%d",&num);
	for(i==0;i<=num;i++){
		if(i%2!=0){
			sum=i+sum;
		}
		
	}
		printf("\n%d",sum);
}
