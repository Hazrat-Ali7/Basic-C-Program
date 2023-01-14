//WAP a define Strong number.
#include<stdio.h>
void main()
{
     int num,temp,rem,sum=0,fact,i;
    printf("Enter Any Number=");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {

        rem=temp %10;
        fact=1;
        for(i=1;i<=rem;i++)
        {

            fact=fact*i;
        }
        sum = sum +fact;
        temp =temp/10;

    }
    if(sum==num)

    printf("strong number:%d\n",num);

    else
     printf("Not a strong number:%d\n",num);

    getch();
}
