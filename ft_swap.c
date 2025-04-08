#include "ft.h"

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a, b;
    a = 5;
    b = 3;

    ft_swap(&a, &b);
    printf("%d %d", a, b);
}
