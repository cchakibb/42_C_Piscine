#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char s[] = "Thyra\0";

	printf("%d\n", ft_strlen(s));

	return (0);
}
