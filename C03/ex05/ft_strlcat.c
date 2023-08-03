/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyukba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:00:41 by ebuyukba          #+#    #+#             */
/*   Updated: 2021/11/02 19:11:06 by ebuyukba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	d;
	unsigned int	c;
	unsigned int	count1;

	count = 0;
	c = 0;
	d = 0;
	count1 = 0;
	if (size != 0)
	{
		while (dest[c] != '\0')
			c++;
		while (src[d] != '\0' && c < size)
		{
			dest[c] = src[d];
			c++;
			d++;
		}
		dest[c] = '\0';	
	}
	while (dest[count] != '\0')
		count++;
	while (src[count1] != '\0')
		count1++;
	return (count + count1);
}
