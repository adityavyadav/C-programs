#include<stdio.h>
int main()
{
	int n,i=0;
    printf("Enter number:");
    scanf("%d",&n);
    do{
printf("\n%d",i);
    i++;
	
}while(i<=n);
	if(n>0){
    		printf("\nNumbers is positive.");
	}else{
	printf("\nexit");
}
}
