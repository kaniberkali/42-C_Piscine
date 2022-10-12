/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:10:36 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/04 10:11:59 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_params(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] == s2[counter])
		counter++;
	if (s1[counter] > s2[counter])
		return (1);
	else
		return (-1);
}

int	get_length(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

void	swap_params(char **s1, char **s2)
{
	char	*ram;

	ram = *s1;
	*s1 = *s2;
	*s2 = ram;
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = -1;
	while (++i, argc > i)
	{
		k = i;
		while (++k, argc > k)
			if (check_params(argv[i], argv[k]) == 1)
				swap_params(&argv[i], &argv[k]);
	}
	i = 0;
	while (++i, argc > i)
	{
		k = -1;
		while (++k, argv[i][k] != '\0')
			write(1, &argv[i][k], 1);
		write(1, "\n", 1);
	}
	return (0);
}
