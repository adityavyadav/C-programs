#include<stdio.h>
int main()
{
	int month;
	printf("Enter month:");
    scanf("%d",&month);
    switch(month)
    {
    	case 1:
    		printf("\nJanury");
    	break;
    	case 2:
    		printf("\nFebruary");
    	break;
        	case 3:
        	printf("\nMarch");
    	break;
    		case 4:
    			printf("\nApril");
    	break;
    		case 5:
    			printf("\nMay");
    	break;
    		case 6:
    			printf("\nJune");
    	break;	
		    case 7:
		    	printf("\nJully");
    	break;
    		case 8:
    			printf("\nAguast");
    	break;
    		case 9:
    			printf("\nSeptember");
    	break;
    		case 10:
    			printf("\nOctomber");
    	break;
    		case 11:
    			printf("\nNovember");
    	break;
    		case 12:
    			printf("\nDecember");
    	break;
    	default:
    		printf("\nInvalide");
    	
	}
}
