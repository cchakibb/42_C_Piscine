#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

	int main()
{
	char str1[] = "test";

	char str2[6];

	ft_strcpy(str2, str1);
	printf("%s\n", str2);

	return 0;
}

