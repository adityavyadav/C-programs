#include<stdio.h>
int main()
{
	char colour;
	printf("Enter colour:");
	scanf("%c",&colour);
	switch(colour)
	{
		case 'r':
			printf("\nStop");
			break;
			case 'y':
				printf("\nReady");
				break;
				case 'g':
					printf("\nGo");
					break;
					default:
						printf("\nInvalide");
	}
}
