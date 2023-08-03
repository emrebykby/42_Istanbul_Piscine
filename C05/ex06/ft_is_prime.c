/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:33:27 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/05 21:24:13 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
			break ;
		}
		i++;
	}
	if (nb <= 1)
		return (0);
	return (1);
}
int	main(void)
{
	int	result;
	
	result = ft_is_prime(2147483647);
	printf("%d\n", result);	
	return (0);
}
