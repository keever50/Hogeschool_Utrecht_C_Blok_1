/*
Naam: Kevin Witteveen
Programma: 12 Programma Genereren
Datum: 21/10/2023
*/

/*
Gegenereerd met ChatGPT 4, zonder modificaties.
Chat: https://chat.openai.com/share/63c758b2-af05-4b5b-b5e1-d84d99e2b9d0
Prompt: 
K: Can you generate a C code in the C98 standard with the following instructions i will send after this message?
GPT: Of course! Please provide the instructions, and I'll generate the C code adhering to the C98 standard for you.
K: Instructions are in dutch:
    1) Genereer met ChatGPT ( https://chat.openai.com/Links to an external site. )  een programma  in  ANSI C met commentaar
    dat een char-array vult met de letters van het alfabet. Druk deze array af.
GPT: Based on the provided Dutch instructions, you want a program in ANSI C that fills a char-array with the letters of the alphabet and then prints this array. Here's the code:
*/

#include <stdio.h>

int main() {
    /* Declareer een char-array met ruimte voor het alfabet plus een nul-terminator */
    char alfabet[27];

    /* Vul de array met de letters van het alfabet */
    int i;
    for (i = 0; i < 26; i++) {
        alfabet[i] = 'A' + i;
    }

    /* Voeg een nul-terminator toe aan het einde van de array */
    alfabet[26] = '\0';

    /* Druk de array af */
    printf("%s\n", alfabet);

    return 0;
}