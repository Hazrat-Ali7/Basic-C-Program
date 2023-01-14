// fibonacci series-(0,1,1,2,3,5,8,13)- C program.
// first=0;
// second=1;
// sum= first +second; (fibonacci Tecnic).
#include<stdio.h>
int main()
{
    int first=0,second=1,fibo,count=0,n;
    //printf("Positive integer n=");
    scanf("%d",&n);

    while(count<n)
    {

        if(count<=1)
        {
            fibo=count;
        }

        else
        {

            fibo=first+second;
            first=second;
            second=fibo;
        }

        printf("%d,",fibo);
        count++;

    }
}
