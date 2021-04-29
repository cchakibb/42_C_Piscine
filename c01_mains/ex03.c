#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a, b;
	
	a = 100;
	b = 2;

	int div, mod;
	int *ptr1, *ptr2;

	ptr1 = &div;
	ptr2 = &mod;

	ft_div_mod(a, b, ptr1, ptr2);
	printf("a / b = %d,\n a %% b = %d\n", *ptr1, *ptr2);
	return 0;
}
