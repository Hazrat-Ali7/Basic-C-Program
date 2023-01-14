
#include<stdio.h>
int main()
{

    int n=6,ara[n],i,oddcounter,evencounter;


    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++)
    {

        if(ara[i]%2==0)
            evencounter++;
            else
            oddcounter++;
    }
    printf("Even Number=%d\n",evencounter);
    printf("Odd Number=%d\n",oddcounter);

}
