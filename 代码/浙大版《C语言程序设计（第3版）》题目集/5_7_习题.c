#include <stdio.h>
#include <math.h>

double factorial( int n );
double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double factorial( int n )
{
    double result = 1.0;
    while ( n > 1 )
    {
        result *= n;
        n--;
    }
    return result;
}

double funcos( double e, double x )
{
    int i = 2;
    int j = -1;
    double item = 1.0;
    double result = item;
    while ( item > e )
    {
        item = pow(x, i) / factorial(i);
        result += (j * item);
        i += 2;
        j = -j;
    }
    return result;
}