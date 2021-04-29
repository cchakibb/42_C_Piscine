#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a, b;

	a = 200;
	b = 5;

	int *ptr1, *ptr2;

	ptr1 = &a;
	ptr2 = &b;

	ft_ultimate_div_mod(ptr1, ptr2);
	printf("a / b = %d,\na %% b = %d\n", *ptr1, *ptr2);

	return 0;
}
