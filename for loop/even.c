#include<stdio.h>
int main()
{
int num,i=1;
	printf("Enter first no.:");
	scanf("%d",&num);
	while(i<=num){
		if(i%2==0){
			printf("\n%d",i);
		}
	}
}
