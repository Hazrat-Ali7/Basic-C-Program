
#include<stdio.h>
void main()
{

 char lower,upper;

 printf("Enter any uppercase letter:");

 scanf("%c",&upper);

 lower=tolower(upper);

 printf("Lowercase letter = %c",lower);

 getch();
}
