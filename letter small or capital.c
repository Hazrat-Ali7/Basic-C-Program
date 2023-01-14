// Letter Small or Capital Program.

#include<stdio.h>
void main()
{
   char ch;
   printf("Enter a Letter=");
   scanf("%c",&ch);

   if (ch>='a' && ch<='z')
        printf("Small Letter");

    else if (ch>='A' && ch<='z')
        printf("Capital Letter");

    else
        printf("Not a Letter");
    getch();
}
