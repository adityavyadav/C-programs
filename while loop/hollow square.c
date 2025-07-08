#include <stdio.h>

int main(){
    
	
	int n=5;
    int i=1;
    while(i<=n)
	{
	int j=1;
    while(j<=n)
	{
    if (i+j==n/2+2||i-j==n/2||j-i==n/2||i+j==3*n/2+1){			
            printf("* ");
        }else{
        	printf(" ");
		}
		j++;
    }
            printf("\n");
            i++;
}
}
