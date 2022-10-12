/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:01:26 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/04 10:17:08 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	if (argc >= 1)
	{
		while (argv[0][counter] != '\0')
		{
			write(1, &argv[0][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
