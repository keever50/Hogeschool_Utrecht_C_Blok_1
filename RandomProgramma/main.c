/*************************
Naam: Kevin Witteveen
Programma: Raad het getal
Datum: 26/09/2023
Opmerking: Mijn programma heeft een extra score functie. Dit is niet deel van het opdracht.
*************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Dit is niet deel van het opdracht, maar leuk om te toevoegen*/
#include <math.h>
#define POINT_DIVIDER 1.5
float score=100; 


int main()
{
    srand(time(NULL));
    printf("Voer een random getal in: ");
    int getal = rand()%100+1;
    int input=0;
    
    while(input!=getal)
    {
        
        scanf("%d", &input);
        if(input<0 || input>100)
        {
            printf("Input moet een getal zijn tussen 0-100\n");
            continue;
        }
        if(input==getal)
        {
            printf("Correct\n");
            printf("Score: %f\n", score);
            break;
        }
        if(input<getal)
        {
            printf("Te laag\n");
            score = score / POINT_DIVIDER;
        }
        else if(input>getal)
        {
            printf("Te hoog\n");
            score = score / POINT_DIVIDER;
        }

        
    }
    printf("Gestopt\n");   

    return 0;
}