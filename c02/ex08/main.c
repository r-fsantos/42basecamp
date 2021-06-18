#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[] = "ALGUMA";
	char str2[] = "cOisA";

	ft_strlowcase(str1);
	ft_strlowcase(str2);

	if (
		str1[0] == 'a'
		&& str1[1] == 'l'
		&& str1[2] == 'g'
		&& str1[3] == 'u'
		&& str1[4] == 'm'
		&& str1[5] == 'a'
		&& str2[0] == 'c'
		&& str2[1] == 'o'
		&& str2[2] == 'i'
		&& str2[3] == 's'
		&& str2[4] == 'a'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	printf("\n");
}