/***********************************************************************************************************************************************************************************************************************************************************
    Naam: Kevin_Witteveen.c
    Programma: Optelprogramma 2
    Datum: 19/09/2023
    Versie: 1.1.0.42B(Final release)
    Beschrijving:
        Pas het programma vervolgens aan zodat alle tien de ingevoerde waarden worden opgeteld  en print de uitkomst na de invoer van het tiende getal.
        Pas het programma  nog een keer aan door in plaats van de  "for"  de "while" statement te gebruiken
***********************************************************************************************************************************************************************************************************************************************************/


#include <stdio.h>

int ask_number( char num )
{
    int input;
    printf("Voer getal %d in: ",num);
    scanf("%d", &input);

    return input;       
}

void main()
{   
    char teller = 1;
    int som=0;
    while(teller<=10) 
    {
        int input = ask_number(teller);
        som=som+input;
        printf("%d\n", input);

        teller++;
    }

    printf("SOM: %d\n", som);
}