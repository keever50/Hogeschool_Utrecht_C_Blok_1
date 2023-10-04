#include <stdio.h>
#include <math.h>

#define range 13

float floats[range];
double doubles[range];

int main()
{
    int n=0;

    /*Float*/
    printf("Float\n");
    const float wortelF = pow(2.0,1.0/12.0); //12Wortel(2) want 2^(1/12) = 12sqrt(2)
    const float frequentieF = 440;
    for(n=0;n<=range;n++)
    {
        
        float macht = pow(wortelF, n); //12Wortel2 ^ exponent n
        
        printf("|%f^%d=%f\n", wortelF, n, macht);
        float nieuwefrequentie = frequentieF*macht;
        printf("|%f^%f=%f\n", frequentieF, macht, nieuwefrequentie); //Frequentie * macht
        printf("\n");

        floats[n]=nieuwefrequentie;
    }

    /*Double*/
    printf("\n\nDouble\n");
    const double wortelD = pow(2.0,1.0/12.0); //12Wortel(2) want 2^(1/12) = 12sqrt(2)
    const double frequentieD = 440;
    for(n=0;n<range;n++)
    {
        double macht = pow(wortelD, n); //12Wortel2 ^ exponent n
        
        printf("|%f^%d=%f\n", wortelD, n, macht);
        double nieuwefrequentie = frequentieD*macht;
        printf("|%f^%f=%f\n", frequentieD, macht, nieuwefrequentie); //Frequentie * macht
        printf("\n");

        doubles[n]=nieuwefrequentie;
    }

    printf("\nErrors:\n");
    for(n=0;n<range;n++){
        double error = floats[n]-doubles[n];
        printf("macht\t%d\t%f error\n", n, error);
    }

    return 1;
}