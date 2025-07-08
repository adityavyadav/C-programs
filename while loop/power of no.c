#include <stdio.h>

int main() {
	int a,n,result=1;

    printf("Enter value:");
    scanf("%d",&a);

    printf("Enter value:");
    scanf("%d",&n);
    int i=1;
    while(i<=n) 
	{
        result=n*result ;
        i++;
    }

    printf("\nThe power is%d",a,n,result);
}
