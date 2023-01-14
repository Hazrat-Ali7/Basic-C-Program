//Display the 5th value from fibo series.
#include<Stdio.h>
void main()
{
    int a,b,c,i;
    a=0;
    b=1;

   printf("%d %d ", a, b);

    for(i=1; i<=5; i++)
    {

        c=a+b;

        a=b;
        b=c;

    }
 printf(" %d",c);

getch();

}

//WAP fibonacchi series.
/*#include<Stdio.h>
void main()
{
    int a,b,c,i;
    a=0;
    b=1;
    printf("%d %d ", a, b);

    for(i=0; i<9; i++)
    {

        c=a+b;
 printf(" %d",c);
        a=b;
        b=c;

    }


getch();

}*/
