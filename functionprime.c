
#include<stdio.h>
int is_prime(int p)
{
    int i;
    if(p==1)
        return 0;
    else if(p==2)
        return 1;
    else
    {
        for(i=2; i<p; i++)
        {

            if(p%i==0)
                return 0;
        }
        return 1;
    }
}



int main()
{
    int a,i;
    scanf("%d",&a);
    i=is_prime(a);
    if(i==1)
        printf("%d is a Prime Number\n",a);

    else
        printf("%d is a Composite Number\n",a);

    return 0;
}
