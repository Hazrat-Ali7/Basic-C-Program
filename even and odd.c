#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  (num%2==0)?
   printf("Even"):
       printf("Odd");
  return 0;
  getch();
}
