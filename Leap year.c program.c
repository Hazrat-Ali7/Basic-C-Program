
// Leap Year program:
#include<Stdio.h>
void main()
{
   int year;
   printf("Enter any Year= ");
   scanf("%d",&year);

   if (year%400==0)

        printf("Leap Year");

   else if (year%4==0 && year%100!=0) //true

    printf("Leap year");

    else
        printf("Not Leap year");

   getch();

}
