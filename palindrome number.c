// WAP a define palindrome number.
#include<stdio.h>
void main()
{

    int num,temp,r,sum=0;
    printf("Enter Any Number=");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {

        r=temp %10;
        sum = sum *10 +r;
        temp =temp/10;

    }
    if(num==sum)

          printf("palindrome number");

    else

    printf("Not palindrome");

getch();
}
