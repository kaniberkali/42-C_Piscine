/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:59:38 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/01 12:12:48 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_length(char *array)
{
	unsigned int	counter;

	counter = 0;
	while (array[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	dest_length;

	dest_length = get_length(dest);
	counter = 0;
	while (src[counter] != '\0' && counter < nb)
	{
		dest[dest_length + counter] = src[counter];
		counter++;
	}
	dest[dest_length + counter] = '\0';
	return (dest);
}
