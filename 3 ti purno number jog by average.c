#include<stdio.h>
void main()
{

    int num1,num2,num3,sum;
    float avg;


    printf("Enter Three Number");

    scanf("%d %d %d",&num1,&num2,&num3);

    sum= num1 +num2 +num3;

    avg = (float)sum/3;

     printf("sum = %d\n",sum);
    printf("Average = %.1f\n",avg);

    getch();

}
