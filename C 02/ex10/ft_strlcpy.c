/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:26:16 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/29 11:10:26 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char *array)
{
	int counter;

	counter = 0;
	while (array[counter] != '\0')
		counter++;
	return (counter);
}
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	size--;
	while (counter < size && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (get_length(src));
}
