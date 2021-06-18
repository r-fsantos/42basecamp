#include <stdio.h>
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str1[] = "alguma";
	char str2[] = "cOisA";

	ft_strupcase(str1);
	ft_strupcase(str2);
	if (
		str1[0] == 'A'
		&& str1[1] == 'L'
		&& str1[2] == 'G'
		&& str1[3] == 'U'
		&& str1[4] == 'M'
		&& str1[5] == 'A'
		&& str2[0] == 'C'
		&& str2[1] == 'O'
		&& str2[2] == 'I'
		&& str2[3] == 'S'
		&& str2[4] == 'A'
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
