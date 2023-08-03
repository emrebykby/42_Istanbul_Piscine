/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <emrebuyukbay@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:08 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/03 18:14:38 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && s1[counter] != '\0')
	{
		if (s2[counter] == '\0')
			return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
		else if (s1[counter] < s2[counter])
			return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
		else if (s1[counter] > s2[counter])
			return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
		counter++;
	}
	if (counter < n && s2[counter] != '\0')
		return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
	return (0);
}
