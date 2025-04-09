#include "ft.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    res = 0;
    while (str[i])
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}