#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char a[5] = "He";
	char b[10] = "llo!!!";

 	char c[5] = "He";
	char d[10] = "llo!!!";

	printf("Func A = %s %s\n", ft_strncat(a, b, 3), a);
	printf("Func B = %s %s\n", strncat(c, d, 3), c);
	return (0);
}