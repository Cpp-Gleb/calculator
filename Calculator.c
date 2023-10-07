#include <stdio.h>
int main() 
{
	printf("Write number, operation(+,-,*,:), number \n");
	int a, b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	switch(c) 
	{
		case '+':
			a=a+b;
			printf("%d",a);
			break;
		case '-':
			a=a-b;
			printf("%d",a);
			break;
		case '*':
			a=a*b;
			printf("%d",a);
			break;
		case '/':
			if(b!=0)
			{
				a=a/b;
				printf("%d",a);
			}
			else 
			{
				printf("Error!");
			}
			break;
		default:
			printf("Error!");
			break;
	}
	return 0;
}
