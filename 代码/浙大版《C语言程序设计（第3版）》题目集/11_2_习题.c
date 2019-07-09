#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if (n == -1)
        printf("wrong input!\n");
    else
        printf("%d\n", n);

    return 0;
}

int getindex(char *s)
{
    int i = 0;
    char *t[] = {"Sunday", "Monday",
                 "Tuesday", "Wednesday",
                 "Thursday", "Friday",
                 "Saturday"};
    while (**t)
    {
        if (strcmp(s, t[i]) == 0)
            return i;
        (*t)++;
        i++;
    }
    return -1;
}