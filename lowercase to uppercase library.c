#include<stdio.h>
void main()
{

 char lower,upper;

 printf("Enter any lowercase letter:");

 scanf("%c",&lower);

 upper=toupper(lower);

 printf("Uppercase letter = %c",upper);

 getch();
}
