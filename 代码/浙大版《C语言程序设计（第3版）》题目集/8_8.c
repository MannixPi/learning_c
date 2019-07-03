#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

int main()
{
    char s[MAXS] = "abcdef";

    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

void Shift( char s[] )
{
    char temp[3];
    int i, j;
    for ( i = 0; i < 3; i++ )
        temp[i] = s[i];
    for ( i = 3; s[i]; i++ )
        s[i-3] = s[i];
    j = i - 3;
    for ( i = 0; i < 3; i++ )
        s[j++] = temp[i];
}