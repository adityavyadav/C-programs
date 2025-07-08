#include <stdio.h>

int main() {
    int i,n,sum=0,fact=1;

    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++) 
{
	fact=i*fact;
    sum=sum+fact;
}
    printf("\n%d",sum);
}
