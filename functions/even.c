#include<stdio.h>
void even(){
	int num;
	printf("\nEnter number:");
	scanf("%d",&num);
	if(num%2==0){
		printf("Even number");
	}else{
		printf("Odd number");
	}
}
int main(){
	even();
}
