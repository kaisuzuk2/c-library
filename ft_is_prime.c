#include "ft.h"

int ft_is_prime(int nb)
{
    int i;

    if (nb < 2)
        return (0);
    if ((nb == 2) || (nb == 3) || (nb == 5) || (nb == 7) || (nb == 11))
        return (1);
    if ((!nb % 2) || !(nb % 3) || !(nb % 5) || !(nb % 7) || !(nb % 11))
        return (0);
    i = 13;
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i += 2;
    }
    return (1);
}
