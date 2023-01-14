//WAP a switch using Temperature(C/F/K).
#include<stdio.h>
void main()
{

    int choice;
    float temp,convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1. Farenheit to Celsius\n");
    printf("2. Celsius to Farenheit\n");
    printf("Enter Your Choice=");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:

        printf("Enter the Farenheit temperature=");
        scanf("%f",&temp);
        convertedTemp =(temp-32)/1.8;
        printf("The temperature is Celsius is =%f\n",convertedTemp);
        break;

    case 2:
    {

        printf("Enter the Celsius temperature=");
        scanf("%f",&temp);
        convertedTemp =( 1.8*temp)+32;
        printf("The temperature is Farenheit is =%f\n",convertedTemp);

    }


    default:
        printf("Not a Correct option");


    }

    getch();

}
