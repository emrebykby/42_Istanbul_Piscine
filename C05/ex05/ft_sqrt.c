/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:29:00 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/09 16:26:46 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	if (nb == 0)
	{
		return (0);
	}
	i = 1;
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
