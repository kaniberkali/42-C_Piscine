/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:01:27 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/01 12:11:36 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_length(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_length;
	unsigned int	dest_length;

	src_length = get_length(src);
	dest_length = get_length(dest);
	if (size == 0)
		return (src_length);
	counter = 0;
	while (src[counter] && dest_length + counter < (size - 1))
	{
		dest[counter + dest_length] = src[counter];
		counter++;
	}
	if (counter < size)
		dest[dest_length + counter] = '\0';
	if (dest_length > size)
		return (src_length + size);
	return (dest_length + src_length);
}
