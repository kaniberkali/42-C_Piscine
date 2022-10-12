/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:06:57 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/03 16:13:01 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (argc > i)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			write(1, &argv[i][k], 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
