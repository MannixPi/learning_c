#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

// 返回第n项的Fibonacci数
int fib( int n )
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);    
}

void PrintFN( int m, int n )
{
    int i = 1;
    int first = 1;
    while (fib(i) < m) i++;
    while (fib(i) <= n)
    {
        if (first)
        {
            first = 0;
            printf("%d", fib(i));
        }
        else
            printf(" %d", fib(i));  
        i++;
    }
    if (first)
        printf("No Fibonacci number\n");
}