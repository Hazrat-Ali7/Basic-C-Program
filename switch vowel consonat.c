// switch vowel consonant define c program.
#include<Stdio.h>
void main()
{

    char ch;
    printf("Enter any letter=");
    scanf("%c",&ch);

    switch(ch)

    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':


        printf("Vowel\n");
        break;

    default:
        printf("Consonant\n");

    }

getch();

}
