/*
Naam: Kevin Witteveen
Programma: Optel programma met 999 eind
Datum: 26/09/2023
*/

#include <stdio.h>

int main()
{
    int input=0;
    int som=0;

    while(input!=999)
    {
        printf("Voer getal in: ");
        scanf("%d", &input);
        if(input==999)
        {
            break;
        }
        if(input<0 || input>100)
        {
            printf("Getal moet tussen 0-100\n");
            continue;
        } 
        som=som+input;
        
    }
    printf("SOM: %d\n", som);

    return 0;
}