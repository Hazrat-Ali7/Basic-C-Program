//1*2*3*.......*N   (serial wise)
//1*3*5*.......*N  (series odd number)
//2*4*6*.......*N   (series even number)
#include<stdio.h>
void main()
{
    int n,i,result=1;
    printf("Enter n=");
    scanf("%d",&n);

    for(i=1;i<=n; i++)
    {

        result=result*i;
    }
    printf("%d\n",result);

    getch();
}
