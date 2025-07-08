#include <stdio.h>

int main() {
    int n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n) 
{
    sum=i+sum;
    i++;
}
    printf("\n%d",sum);
}
