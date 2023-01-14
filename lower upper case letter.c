#include<stdio.h>
void main()
{

    char ch ='K';
   //printf("Enter the Letter=\n");
    if(ch >= 'a' && ch<='z')
    {  printf("%c is lower case\n",ch);

    }


    else if (ch >='A' && ch <= 'Z')
    {
         printf("%c is Upper case\n",ch);
    }


    getch();
}
