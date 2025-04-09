#include "ft.h"

char *ft_strrev(char *str)
{
    int len;
    int i;
    char tmp;

    len = ft_strlen(str);
    i = 0;
    while (i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return (str);
}
