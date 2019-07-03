#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number )
{
	int i;
	int sum = 0;
	if (number == 1)
		sum = 1;
	for ( i = 1; i < number; i++ )
		if ( number % i == 0 )
			sum += i;
	return sum;
}

void PrintPN( int m, int n )
{
	int i,j;
	int count = 0;
	int ret = 0;
	for ( i = m; i < n; i++ )
	{
		if ( factorsum(i) == i )
		{
			ret = 0;
			count ++;
			printf("%d = ", i);
			if ( i == 1 )
				printf("%d", i);
			for ( j = 1; j < i; j++ )
			{
				if ( i % j == 0 )
				{
					printf("%d", j);
					ret += j;
					if (ret != i)
						printf(" + ");
				}
			}
			printf("\n");
		}
	}
		
	if ( count == 0 )
		printf("No perfect number\n");
}