/*
Naam: Kevin Witteveen
Datum: 05/10/2023
Programma: SwitchCase
Geschreven in: Visual code (GCC C99)
*/
#include <stdio.h>

void print_som(int tafel)
{
    int n;
    int som=0;
    for(n=1;n<=10;n++)
    {
        som=som+n*tafel;
    }
    printf("som van tafel %d: %d\n", tafel, som);
}

void print_tafel(int tafel)
{
    int n;
    for(n=1;n<=10;n++)
    {
        printf("%d*%d=%d\n", n, tafel, n*tafel);
    }
}

void print_mod(int tafel)
{
    int n;
    for(n=1;n<=10;n++)
    {
        printf("%d*%d%%3=%d\n",n,tafel,(n*tafel)%3);
    }
}

int main()
{
    int input;
    scanf("%d", &input);

    switch(input)
    {
        case 1: /*Lege cases want zonder break negeert hij andere cases, waardoor hij werkt als een 'or' functie*/
        case 2:
            print_som(input);
            break;
        case 3:
        case 4:
        case 5:
            print_tafel(input);
            break;
        case 6:
        case 7:
        case 8:
            print_mod(input);
            break;
        default:
            printf("het 1e couplet van het Wilhelmus");
            break;
    }
}