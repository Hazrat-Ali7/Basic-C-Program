#include<stdio.h>
int mySum(int x, int y)
{
    printf("Adding Two NUmber=");
    return x+y;
}


int main ()
{
    int a,b;
    a= mySum(7,33);
    printf("%d\n",a);
    b= mySum(99,10);
    printf("%d\n",b);


    return 0;
}
