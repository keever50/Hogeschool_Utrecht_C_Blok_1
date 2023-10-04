#include <stdio.h>
#include <stdlib.h>

char str[20];
int number;
void main()
{
    scanf("%s", str);

    int num = atoi(str);

    printf("%d", num);
}