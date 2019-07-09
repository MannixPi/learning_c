#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

char *match(char *s, char ch1, char ch2)
{
    int i;
    int index = -1;
    for (i = 0; s[i]; i++)
    {
        if (index == -1 && s[i] == ch1)
            index = i;
        if (index != -1)
            printf("%c", s[i]);
        if (index != -1 && s[i] == ch2)
            break;
    }
    printf("\n");
    if (index == -1)
        return NULL;
    else
        return s + index;
}