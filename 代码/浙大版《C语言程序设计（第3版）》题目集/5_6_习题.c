#include <stdio.h>
#include <math.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number )
{
    int temp = number;
    int count = 0;
    int sum = 0;    
    while ( temp )
    {
        temp /= 10;
        count++;
    }
    temp = number;
    while ( temp )
    {
        sum += pow(temp % 10, count);
        temp /= 10;
    }
    if ( sum == number )
        return 1;
    else
        return 0;
}

void PrintN( int m, int n )
{
    int i;
    for ( i = m; i <= n; i++ )
        if ( narcissistic(i) )
            printf("%d\n", i);
}