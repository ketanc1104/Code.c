#include<stdio.h>
main() 
{
	char op;
	int a,b;
	printf("Enter an operator (+, -, *, /,%)");
	scanf("%c",&op);
	printf("Enter two operands:");
	scanf("%d %d",&a,&b);
  switch(op)
  {
	case '+':printf("%d+%d=%d",a,b,a+b);break;
		case '-':printf("%d-%d=%d",a,b,a-b);break;
			case '*':printf("%d*%d=%d",a,b,a*b);break;
				case '/':printf("%d/%d=%d",a,b,a/b);break;
					case '%':printf("%d %d=%d",a,b,a%b);break;
  }
}