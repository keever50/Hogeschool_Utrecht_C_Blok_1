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

int main()
{
    int input;
    scanf("%d", &input);

    switch(input)
    {
        case 1:
        case 2:
            print_som(input);
            break;
        case 3:
        case 4:
        case 5:

        break;
        case 6:
        case 7:
        case 8:
        break;
        default:
        break;
    }
}