#include<stdio.h>
int main()
{
    int n=6;
    int ara[n];
    int i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    int m =ara[0];

    for(i=0; i<n; i++)
    {
        if(ara[i]<m)
        {
            m=ara[i];

        }

    }

  printf("The Maximum value is =%d\n",m);
}
