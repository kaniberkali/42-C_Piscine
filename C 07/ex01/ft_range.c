/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:23:59 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/04 12:45:16 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	counter;

	if (min >= max)
		return (0);
	numbers = (int *)malloc((max - min) * sizeof(int));
	counter = 0;
	while (min < max)
	{
		numbers[counter] = min;
		min++;
		counter++;
	}
	numbers[counter] = '\0';
	return (numbers);
}
