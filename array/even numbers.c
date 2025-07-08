#include<stdio.h>
int main()
{
int i,sum=0;
int number[50];
	printf("Enter first no.:");
	scanf("%d",&number[0]);
	for(i==0;i<=50;i++){
		if(i%2==0){
		sum=i+sum;
        printf("\n%d",sum);
		}
	}
}
