#include<stdio.h>
void main()
{
    int num1,num2,large;

    printf("Enter two numbers=");
    scanf("%d %d",&num1,&num2);

    large =(num1>num2) ? num1 :num2;
    printf("large number=%d\n",large);

    getch();
}
