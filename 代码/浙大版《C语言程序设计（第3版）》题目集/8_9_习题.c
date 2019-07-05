#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
// void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS] = "aZ&*?\n093 Az";

    // ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char *s )
{
    int capital_letter = 0;
    int small_letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0; 
    while ( *s )
    {
        if ( *s >= 65 && *s <= 90 )
            capital_letter++;
        else if ( *s >= 97 && *s <= 122 )
            small_letter++;
        else if ( *s == 32 )
            blank++;
        else if ( *s >= 48 && *s <= 57 )
            digit++;
        else
            other++;
        *s++;
    }
    printf("%d %d %d %d %d\n", capital_letter, small_letter, blank, digit, other);
}