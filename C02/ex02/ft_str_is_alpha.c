/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <emrebuyukbay@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 08:30:22 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/10/29 08:33:37 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if ((str[e] < 'A' || str[e] > 'Z') && (str[e] < 'a' || str[e] > 'z'))
			return (0);
		e++;
	}
	return (1);
}
