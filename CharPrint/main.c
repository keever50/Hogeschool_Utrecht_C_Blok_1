/*
Naam: Kevin Witteveen
Programma: Char printer
Datum: 02/10/2023
*/


#define DOE_DIT

#include <stdio.h>
const char zin[] = "DIT IS EEN ZIN OFZO\nDIT OOK\n";

int main()
{
    #ifdef DOE_DIT
    unsigned char teller = 0;
    for(teller; teller<sizeof(zin)-1; teller++) /*Er is een 0 of wel \0 aan het eind van een string. Dus die mogen we overslaan.*/
    {
        printf("%c", zin[teller]);    
    }
    #endif
    return 1;
}