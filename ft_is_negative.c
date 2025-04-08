#include "ft.h"

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int main(void)
{
	ft_is_negative(1);
	ft_is_negative(-1);
}
