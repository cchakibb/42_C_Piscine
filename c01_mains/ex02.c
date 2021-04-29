#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int a, b;

	a = 1;
	b = 2;

	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;

	ft_swap(ptr1, ptr2);
	printf("a = %d , b = %d", *ptr1, *ptr2);
}