#include<stdio.h>
int main()
{
	int i,j;
	int marks[5][5];

    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    	printf("\nEnter value for subject %d:",j+1);
		scanf("%d",&marks[i][j]);
		}
	}
	
    for(i=0;i<5;i++){
    for(j=0;j<5;j++){
    printf("\t%d",marks[i][j]);
}
printf("\n");
}
}
