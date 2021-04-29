#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char a[40] = "Hello";
	char b[40] = " + World";

	printf("My func = %s\n", ft_strcat(a, b));

	char c[] = "Hello";
	char d[] = " + World";

	printf("Their func = %s\n", strcat(c, d));
	return (0);
}