#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int tab[4] = {5, 6, 7, 12};
	int size = sizeof(tab) / sizeof(tab[0]);
	
	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}