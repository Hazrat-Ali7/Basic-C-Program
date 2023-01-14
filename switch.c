// Switch Keyword: switch,case,break,default.
//WAP a program that read a digit and display its spelling.

#include<stdio.h>
void main()
{
    int digit;
    printf("enter a digit=");
    scanf("%d",&digit);

    switch(digit)

    {
    case 0:
        printf("Zero\n");
        break;


    case 1:
        printf("One\n");
        break;

    case 2:
        printf("Two\n");
        break;

    case 3:
        printf("Three\n");
        break;

    case 4:
        printf("Four\n");
        break;

    case 5:
        printf("Five\n");
        break;


    case 6:
        printf("Six\n");
        break;

    case 7:
        printf("Seven\n");
        break;

    case 8:
        printf("Eight\n");
        break;

    case 9:
        printf("Nine\n");
        break;

        default:
        printf("Not a Valid Digit");
    }

    getch();
}
