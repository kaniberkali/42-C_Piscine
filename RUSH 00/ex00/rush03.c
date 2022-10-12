/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:52:51 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/24 13:43:22 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linewrite(int x, char char1, char char2, char char3)
{
	ft_putchar(char1);
	while (x - 2 > 0)
	{
		ft_putchar(char2);
		x--;
	}
	if (x > 1)
		ft_putchar(char3);
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		linewrite(x, 'A', 'B', 'C');
		while (y - 2 > 0)
		{
			ft_putchar('\n');
			linewrite(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 1)
		{
			ft_putchar('\n');
			linewrite(x, 'A', 'B', 'C');
		}
	}
}
