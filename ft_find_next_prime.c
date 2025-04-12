#include "ft.h"

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb))
        return (nb);
    else 
    {
      while (!ft_is_prime(nb))
        nb++;
    }
    return (nb);
}_
