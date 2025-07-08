#include<stdio.h>
int main()
{
int i=1;
int num,sum=0;
	printf("Enter first no :");
	scanf("%d",&num);
	while(i<=num){
		if(i%2!=0){
			sum=i+sum;
		}
	i++;	
	}
		printf("\n%d",sum);
}
