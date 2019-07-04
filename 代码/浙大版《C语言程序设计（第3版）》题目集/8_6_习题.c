#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
// void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN] = "happy new year";
    char c;

    scanf("%c", &c);
    // ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

void delchar( char *str, char c )
{
    int i;
    int j = 0;
    int temp[MAXN];
    // 排除 str 字符串里的所有 c 字符，并赋给 temp 字符串
    for ( i = 0; str[i]; i++ )
        if ( str[i] != c )
            temp[j++] = str[i];
            
    for ( i = 0; i < j; i++ )
        str[i] = temp[i];
    str[i] = '\0';
}