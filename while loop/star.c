#include <stdio.h>

int main(){
	int n=5;
    int i=1;
   while(i<=n)
	{
		int j=1;
        while(j<=n)
		{
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}
