#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

int fn( int a, int n )
{
    int i;
    int t = 1;
    int result = 0;
    for ( i = 0; i < n; i++ )
    {
        result += a * t ;
        t *= 10;
    }
    return result;
}

int SumA( int a, int n )
{
    int i;
    int sum = 0;
    for ( i = 1; i <= n; i++ )
        sum += fn(a, i);
    return sum;
}