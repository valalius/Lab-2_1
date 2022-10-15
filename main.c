#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double X, Y;

    printf(" Please enter X\t");
    scanf("%lf", &X);
    if (X>=-5 && X<1)
    {
        Y=2*pow(X,2)-exp(-X)+1;
    }
    else if (X>=1 && X<100)
    {
        Y=sqrt(2*X+1)-4/sqrt(4*X+1);
    }
    else if (X>=100 && X<=1000)
    {
        Y=2*log10(2*X)-pow(X,2)/4;
    }
    else
    {
        Y=-1;
    }
    system("cls");
    printf(" X = %.2lf", X);
    printf("\n --> Y = %.2lf", Y);
    return 0;
}
