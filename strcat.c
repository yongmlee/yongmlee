#include <stdio.h>

char    *strcat(char *dest, const char *src)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while (dest[a])
        a++;
    while (src[b])
    {
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}

int     main(void)
{
    char s1[50] = "hello";
    char s2[50] = "world";
    char s3[50] = "haha";

    printf("%s\n", strcat(s2, s1));
    printf("%s\n", s3);
    return (0);
}
