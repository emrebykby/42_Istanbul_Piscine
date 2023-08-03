#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char	array[7] = "ABcdEfG";
	int	loop;
	ft_strupcase(array);
	for(loop = 0; loop < 7; loop++)
      printf("%c ", array[loop]);
      
   return 0;
}
