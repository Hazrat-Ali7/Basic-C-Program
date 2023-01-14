//multiplication table.
// time table.

#include<stdio.h>
void main()
{
    while(1)
    {
        int num,i;
        printf("Enter Any Number=");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {

            printf("%d X %d= %d\n",num,i,num*i);

        }
    }

    getch();

}
