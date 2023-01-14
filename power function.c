#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter x =");
    scanf("%d",&x);

    printf("Enter y =");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("%.0lf",result);

  getch();

}
