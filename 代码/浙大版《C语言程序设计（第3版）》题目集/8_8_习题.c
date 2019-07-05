#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s )
{
    int i;
    int length = strlen(s);
    int middle = length / 2;
    for ( i = 0; i < middle; i++ )
        if ( s[i] != s[length-i-1] )
            return false;
    return true;
}