#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p )
{
    int i;
    int result = 1;
    if ( p <= 1 )
        result = 0;
    for ( i = 2; i <= sqrt(p); i++ )
        if ( p % i == 0 )
            result = 0;
    return result;
}

int PrimeSum( int m, int n )
{
    int i;
    int result = 0;
    for ( i = m; i <= n; i++ )
        if ( prime(i) )
            result += i;
    return result;
}