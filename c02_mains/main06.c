#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char str[] = "ö";
	ft_str_is_printable(str);
	return 0;
}