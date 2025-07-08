#include <stdio.h>

int main() {
    int i,a,n,result=1;

    printf("Enter value:");
    scanf("%d",&a);

    printf("Enter value:");
    scanf("%d",&n);

    for (i=1;i<=n;i++) 
	{
        result=n*result ;
    }

    printf("\nThe power is%d",a,n,result);
}
