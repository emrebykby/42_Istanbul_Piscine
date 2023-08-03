/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <emrebuyukbay@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 09:38:58 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/10/29 09:42:51 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if ((str[e] > '9' || str[e] < '0'))
			return (0);
		e++;
	}
	return (1);
}