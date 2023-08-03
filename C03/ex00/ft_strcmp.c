/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <emrebuyukbay@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:46:15 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/02 13:11:04 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0')
	{
		if (s2[counter] == '\0')
			return (s1[counter] - s2[counter]);
		else if (s1[counter] < s2[counter])
			return (s1[counter] - s2[counter]);
		else if (s1[counter] > s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	if (s2[counter] != '\0')
		return (s1[counter] - s2[counter]);
	return (0);
}
