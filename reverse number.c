//WAP that read any integer reverse number and sum of digits.
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

    printf("Reverse of number:%d\n",sum);

getch();

}

