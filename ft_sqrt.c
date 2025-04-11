#include "ft.h"

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (nb);
    i = 2;
    while (i <= nb / 2)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
