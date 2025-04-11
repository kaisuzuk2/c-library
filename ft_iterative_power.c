#include "ft.h"

int ft_iterative_power(int nb, int power)
{
    int i;
    int res;

    if (power <= 0)
        return (0);
    res = 1;
    i = 0;
    while (i < power)
    {
        res *= nb;
        i++;
    }
    return (res);
}
