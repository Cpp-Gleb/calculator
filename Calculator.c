#include <stdio.h>
int main() 
{
	int a, b;
	char c = ' ';
	while(c != '!')
	{
		printf("Write nomber, operation(+,-,*,/,^), nomber \n");
		printf("for stop operation write 1!1 \n");
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
			case '^':
				int const=a;
				if(b == 0)
				{
					printf("%d",1);
				}
				else
				{
					for(int i=0;i < b;i++)
					{
						a=a*const;
					}
					printf("%d",a);
				}
			case '!':
				printf("Thanks for work!");
				break;
			default:
				printf("Error!");
				break;
		}
		printf( "\n");
	}
	return 0;
}
