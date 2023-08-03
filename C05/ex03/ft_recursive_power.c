/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:01:49 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/05 16:35:12 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;
	int	answ;

	answ = 1;
	a = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb < 0)
	{
		if (power % 2 == 0)
			nb *= -1;
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
