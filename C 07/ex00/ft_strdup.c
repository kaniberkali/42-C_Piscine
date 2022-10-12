/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:13:26 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/04 12:23:07 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_length(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char *str)
{
	int		counter;
	char	*copy;

	counter = 0;
	copy = (char *)malloc(get_length(str) * sizeof(char));
	while (str[counter] != '\0')
	{
		copy[counter] = str[counter];
		counter++;
	}
	copy[counter] = '\0';
	return (copy);
}
