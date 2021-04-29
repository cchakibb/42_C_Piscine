#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char a[20] = "bbb"; // less
	char b[20] = "bbb"; //

	int is_equal = ft_strcmp(a, b);

	printf("My Function: %s == %s , %d\n", a, b, is_equal);

	char c[20] = "bbb";
	char d[20] = "bbb";

	int isequal = strcmp(c, d);

	printf("Their Function: %s == %s , %d\n", c, d, isequal);

	return (0);
}
