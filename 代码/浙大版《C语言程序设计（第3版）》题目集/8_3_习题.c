#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

int ArrayShift( int a[], int n, int m )
{
    int i, t;
    int move = m % n;
    int temp[move];
    if ( move == n)
        return 0;
    for ( i = 0; i < move; i++ )
        temp[i] = a[i + n - move];
    for ( i = n-1; i >= move; i-- )
        a[i] = a[i-move];
    for ( i = 0; i < move; i++ )
        a[i] = temp[i];
    return 0;
}