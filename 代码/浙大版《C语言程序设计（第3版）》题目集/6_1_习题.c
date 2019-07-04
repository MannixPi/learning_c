#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
//void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS] = "aZ &\r09 Az";

    //ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char s[] )
{
    int i;
    int letter = 0;
    int blank  = 0;
    int digit  = 0;
    int other  = 0;
    for ( i = 0; s[i]; i++ )
    {
        if ( s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' )
            letter++;
        else if ( s[i] == ' ' || s[i] == '\r' )
            blank++;
        else if ( s[i] >= '0' && s[i] <= '9' )
            digit++;
        else
            other++;
    }
    printf("latter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}