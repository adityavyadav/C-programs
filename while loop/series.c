#include <stdio.h>

int main() {
    int i=1;
	int n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n) 
{
    sum=(i*i)+sum;
    i++;
}
    printf("\n%d",sum);
}
