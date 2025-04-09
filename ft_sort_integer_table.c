#include "ft.h"

void ft_sort_integer_table(int *tab, int size)
{
    int i;
    int j;
    int sorted;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        sorted = 1;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                ft_swap(&tab[j], &tab[j + 1]);
                sorted = 0;
            }
            j++;
        }
        if (sorted)
            break;
        i++;
    }
}
