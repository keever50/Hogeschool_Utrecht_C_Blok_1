/*
Naam: Kevin Witteveen
Programma: StringReverse
Datum: 13/10/2023
*/

#include <stdio.h>
#define INPUT_BUFFER_SIZE   32

/*Draai een string om, zonder een ander buffer te gebruiken.*/
void reverse_direct(char* str);
/*Bereken de grote van een string door een nul-terminator te vinden.*/
int string_size( const char* str );
/*Lees de input naar een buffer met bepaalde grote*/
void read_input(char* buffer, int size);
/*Print string in een vierkantje*/
void show_to_output( const char* str);

int main()
{
    char input[INPUT_BUFFER_SIZE];
    printf("To reverse: ");
    read_input(input, INPUT_BUFFER_SIZE);
    reverse_direct(input);
    show_to_output(input);
    return 0;
}

int string_size( const char* str )
{
    int i=0;
    while(str[i]!=0)
    {
        i++;
    }
    return i;
}

void reverse_direct(char* str)
{
    int len = string_size( str )-1; //-1. We willen geen nul-terminator
    int i;
    for(i=0;i<(len-i);i++)
    {
        char second_char = str[len-i]; //Onthoud de 2e char
        str[len-i]=str[i]; //Vervang 2e char met 1ste
        str[i]=second_char; //Vervang 1ste met 2e voor de vorige vervanging.
    }
}

void read_input(char* buffer, int size)
{
    int i;
    for(i=0;i<size-1;i++) //Size-1, want we willen een nul-terminator
    {
        char c = getchar();
        //Check of C 0, newline or return is. Dan break, anders schrijf naar buffer
        if(c == 0 || c == '\n' || c == '\r')
        {
            break;
        }
        buffer[i]=c;
    }
}

void show_to_output( const char* str )
{
    int len = string_size(str);
    int i;
    putchar('+');
    for(i=0;i<len;i++)
    {
        putchar('-');
    }
    putchar('+');

    printf("\n|%s|\n", str);
    putchar('+');
    for(i=0;i<len;i++)
    {
        putchar('-');
    } 
    putchar('+');
}