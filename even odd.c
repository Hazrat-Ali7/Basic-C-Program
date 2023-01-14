#include<stdio.h>
void main()
{

    int number,remainder;

    number=4;

    remainder=number % 2;

    if(remainder == 0)
    {

        printf("The Number is even\n");

    }

    else
    {

        printf("The number is odd\n");
    }

    return 0;

    getch();
}
