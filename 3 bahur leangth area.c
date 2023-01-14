#include<stdio.h>
void main()
{
    float a,b,c,s,area;

    printf("Enter 3 values-");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of Triangle = %.1f\n",area);
    getch();


}
