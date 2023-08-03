/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <emrebuyukbay@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:47:57 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/04 10:28:11 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str[a] <= 'Z'))
			str[a] += 32;
		a++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	l;

	l = 0;
	lowercase(str);
	while (str[l] != '\0')
	{
		if ((str[l] >= 0 && str[l] < 48))
			if ((str[l + 1] >= 'a' && str[l + 1] <= 'z'))
				str[l + 1] -= 32;
		if ((str[l] > 57 && str[l] < 65))
			if ((str[l + 1] >= 'a' && str[l + 1] <= 'z'))
				str[l + 1] -= 32;
		if ((str[l] > 90 && str[l] < 97))
			if ((str[l + 1] >= 'a' && str[l + 1] <= 'z'))
				str[l + 1] -= 32;
		if ((str[l] > 122 && str[l] <= 127))
			if ((str[l + 1] >= 'a' && str[l + 1] <= 'z'))
				str[l + 1] -= 32;
		if ((str[0] >= 'a' && str[0] <= 'z'))
			str[0] -= 32;
		l++;
	}
	return (str);
}
