/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:34:35 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/04 12:52:46 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*numbers;
	int	counter;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	numbers = (int *)malloc((max - min) * sizeof(int));
	counter = 0;
	while (min < max)
	{
		numbers[counter] = min;
		min++;
		counter++;
	}
	numbers[counter] = '\0';
	*range = numbers;
	return (counter);
}
