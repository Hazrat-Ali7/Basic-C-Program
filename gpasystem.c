//Letter Grade GPA Program. (Problem-4)
#include<Stdio.h>
void main()
{
    int mark;
    printf("Enter Mark=");
    scanf("%d",&mark);

    if(mark>=80 && mark<=0)
        printf("Invalid Mark");
    else if(mark>=80 && mark<=100)
        printf("A+");
    else if(mark>=70 && mark<=79)
        printf("A");
    else if(mark>=60 && mark<=69)
        printf("A-");
    else if(mark>=50 && mark<=59)
        printf("B");
    else if(mark>=40 && mark<=49)
        printf("C");
    else if(mark>=33 && mark<=39)
        printf("D");

        else
            printf("Fail");

            getch();
}
