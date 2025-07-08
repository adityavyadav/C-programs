#include<stdio.h>
int a,b,c;
int choice,res;

void add(){
		res=a+b;
    	printf("\nAddition is%d",res);
}
void sub(){
		res=a+b;
    	printf("\nAddition is%d",res);
}
void mul(){
	res=a*b;
    	printf("\nAddition is%d",res);
}
void div(){
	res=a/b;
    	printf("\nAddition is%d",res);

} 
    void cal(){
    	printf("\n1.for addition");
    printf("\n2.for subtraction");
    printf("\n3.for multiplicaction");
    printf("\n4.for division");

    printf("\nEnter choice:");
	scanf("%d",&choice);
	printf("\nEnter number1:");
	scanf("%d",&a);
	printf("\nEnter number2:");
	scanf("%d",&b);
}
int ch;
    switch (ch){
    case 1:
    	add();
    break;
    case 2:
    	sub();
    break;
    case 3:
    mul();
    break;
    case 4:
   div();
	break;
	default:
		printf("Invallide.");
	}
	int main(){
		cal(a,b);
	}

