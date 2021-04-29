#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int tab[4] = {7, 5, 3, 6};
	ft_sort_int_tab(tab, 4);

	int i = 0;
	while (i < 4)
	{
		printf("%d", tab[i]);
		i++;
	}
}