#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}

int search( int n )
{
    int i = 11;
    int j = pow(i, 2);
    int count = 0;
    while ( j < n )
    {
        if ( j%10 == (j/10)%10 || j%10 == (j/100)%10 || (j/10)%10 == (j/100)%10 )
            count++;
        i++;
        j = pow(i, 2);
    }
    return count;
}