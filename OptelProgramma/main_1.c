/***********************************************************************************************************************************************************************************************************************************************************
    Naam: Kevin_Witteveen.c
    Programma: Optelprogramma
    Datum: 19/09/2023
    Versie: 1.0.0.42A(Beta)
    Beschrijving:
        Schrijf een programma dat 10 keer vraagt of je een getal wilt intoetsen.
        Print ieder ingevoerd getal direct nadat ieder getal is ingevoerd.
        Schrijf het programma  eerst zo kort mogelijk. Gebruik dus het "for" flow control statement (stroom regelingsopdracht).
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
    for(teller; teller<=10;teller++)
    {
        int input = ask_number(teller);
        printf("%d", input);
    }
}