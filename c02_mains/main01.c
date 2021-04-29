#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

	int main()
{

	int n = 7;

	char str1[] = "chakib";
	char str2[6];

	ft_strncpy(str2, str1, n);
	printf("%s\n", str2);

	return 0;
}

