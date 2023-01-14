//Break and continue statement.
#include<stdio.h>
void main()
{
    int i;
    for(i=1; i<20; i++)
    {

        if(i%3==0)
            continue; // Bypass.
            printf("%d\n",i);

        if(i==10)
            break; // loop terminate.

    }

    /*
    1
    2
    4
    5
    7     // program output.
    8
    10
    */
   getch();
}
