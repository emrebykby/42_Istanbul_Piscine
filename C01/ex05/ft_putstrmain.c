#include <unistd.h>

void    ft_putstr(char *str);

int		main(void)
{
	char array[]="emre buyukbay";
	char *p_str;

	p_str = array;
	ft_putstr(p_str);
}

