#include <stdio.h>


unsigned char bit4 = 0b00001000;
unsigned char bit5 = 0b00010000;
unsigned char bit6 = 0b00100000;

int bitprint(char teken);

int main()
{
    unsigned char teller=0;
    do
    {
        if((teller&bit4) && (teller&bit5) || (teller&bit6))
        {
            printf("%d\t", teller);
            bitprint(teller);
            printf("%c\n", teller);
        }
        teller++;       //Tel op voordat we checken of teller 0 is in while()
    }while(teller!=0);  //Stop wanneer teller overslaat naar 0.

    return 0;
}

int bitprint(char teken)    			//functiedefinitie bitprint     
{
	int i;									// lokale variabele i 
    for( i = 0; i < 8; i++)				// tellen van 1 tot en met 8
	{ 
		if (teken & 0x80) putchar('1');		// Bitwise selectie/mask van Most Significant Bit (MSB)
		else              putchar('0');		// Print 1 als True, anders een 0
		teken <<= 1;						// Schuif ��n positie naar links. Op de LSB wordt een 0 gezet
	}	
	return putchar('\t');					// print een nieuwe regel
}
