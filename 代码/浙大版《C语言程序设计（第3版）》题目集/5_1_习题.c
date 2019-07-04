#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

int sign( int x )
{
    int result;
    if ( x > 0 )
        result = 1;
    else if ( x == 0 )
        result = 0;
    else
        result = -1;
    return result;
}