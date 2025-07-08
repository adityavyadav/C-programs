#include <stdio.h>

void square(){
    int i,j,n= 5;

    for (i=1;i<=n;i++)
	{
        for (j=1;j<=n;j++)
		{
if (i+j==n/2+2||i-j==n/2||j-i==n/2||i+j==3*n/2+1){			
            printf("* ");
        }else{
        	printf(" ");
		}
    }
            printf("\n");
}
}
int main(){
	square();
}
