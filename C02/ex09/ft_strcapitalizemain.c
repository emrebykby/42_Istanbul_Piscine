#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char	array[70] = "\rsalut, &coMMEnt \ntu vas ? 42mots quarante-deux; cinquante+et+un";
	int	loop;
	ft_strcapitalize(array);
	for(loop = 0; loop <70 ; loop++)
      printf("%c", array[loop]);

   return 0;
}
