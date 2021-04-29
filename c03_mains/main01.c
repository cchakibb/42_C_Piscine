#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char a[20] = "abw";
	char b[20] = "abz";

	int is_equal = ft_strncmp(a, b, 2);

	printf("%s == %s , %d\n", a, b, is_equal);

	char c[20] = "abw";
	char d[20] = "abz";

	int isequal = strncmp(c, d, 2);

	printf("%s == %s , %d\n", c, d, isequal);

	return (0);
}