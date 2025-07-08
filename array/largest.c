#include<stdio.h>
int main(){
	int arr[]={12,3,25,8,5,2,4,9,7,8};
	int numlargest=arr[0];
	int i;
	for(i=0;i<10;i++)
	{
		if(numlargest<arr[i])
		{
			numlargest=arr[i];
		}
	}
	printf("\n%d",numlargest);
}
