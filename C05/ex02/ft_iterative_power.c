/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:40:42 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/04 09:53:53 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
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
	while (a < power + 1)
	{
		answ *= nb;
		a++;
	}	
	return (answ);
}
