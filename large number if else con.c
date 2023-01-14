#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter fisrt number=");
    scanf("%d",&num1);
      printf("Enter 2nd number=");
    scanf("%d",&num2);

    if (num1>num2)
        printf("Large Number= %d\n",num1);
    else if  (num1<num2)
        printf("large number=%d\n",num2);
    else
        printf("Numbers are equal");



}
