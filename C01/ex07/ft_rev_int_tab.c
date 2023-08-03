/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <emrebuyukbay@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:00:02 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/10/28 12:17:26 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	reverse[size];
	int	numbrev;

	counter = 0;
	numbrev = size - 1;
	while (numbrev >= 0)
	{
		reverse[numbrev] = tab[counter];
		numbrev--;
		counter++;
	}
	counter = 0;
	while (counter < size)
	{
		tab[counter] = reverse[counter];
		counter++;
	}
}
