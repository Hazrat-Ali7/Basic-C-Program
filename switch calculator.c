//WAP a switch using Calculator.
#include<stdio.h>
void main()
{

    double num1,num2;
    char op;


    printf("Enter an operator(+,-,*,/)=");
    scanf("%c",&op);

    printf("Enter two numbers=");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
    {
        printf("%lf + %lf=%.0lf\n",num1,num2, num1+num2);
        break;
    }

    case '-':
    {
        printf("%lf - %lf=%.0lf\n",num1,num2, num1-num2);
        break;
    }
    case '*':
    {


        printf("%lf * %lf=%.0lf\n",num1,num2, num1*num2);
        break;
    }

    case '/':
    {

        printf("%lf / %lf=%.0lf\n",num1,num2, num1/num2);
        break;

    }

    default:

        printf("Not a valid operator\n");


    }

    getch();
}
