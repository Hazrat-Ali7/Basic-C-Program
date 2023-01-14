#include<stdio.h>

void main()
{
    float x, sum=0, i, j;
    int n;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1,j=1;i<=n;i++,j+=0.3)
    {
        sum=sum+(i*x)/j;
    }
    printf("Sum of the Series : %.2f",sum);
    getch();
}
