#include <stdio.h>

int main() {
    int i,n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
{
    sum=(i*i)+sum;
}
    printf("\n%d",sum);
}
