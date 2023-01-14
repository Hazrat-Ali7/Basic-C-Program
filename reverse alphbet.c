//reverse alphbet pattern c Program.
 #include<stdio.h>
 void main()
 {

        int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);

    for(row=n;row>=1; row--)
    {

        for (col=1;col<=row; col++)
        {

            printf("%c ",col+64);
        }

        printf("\n");
    }

    getch();
}


