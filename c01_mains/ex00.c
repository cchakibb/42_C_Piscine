#include <stdio.h>

void	ft_ft(int *nbr);

int	main()
{
	int c = 12;
	int *ptr;

	ptr = &c;
	ft_ft(ptr);
	printf("%d\n", *ptr);
	return (0);
}
