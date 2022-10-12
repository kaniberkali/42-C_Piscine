/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 20:22:02 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/01 12:02:23 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char *array)
{
	int	counter;

	counter = 0;
	while (array[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	dest_length;

	dest_length = get_length(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
