#include "ft.h"
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int res;
    if (nb < 0)
            return (0);
    if (nb == 1)
            return (1);
    i = 1;
    res = 1;
    while (i <= nb)
    {
        res *= i;
        i++;
    }
    return (res);
}

int main(void)
{
    printf("%d\n", ft_iterative_factorial(5));
}
