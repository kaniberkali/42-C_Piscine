/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:24:42 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/09 14:21:43 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	write_strs(char *strs)
{
	int	counter;

	counter = 0;
	while (strs[counter] != '\0')
	{
		write(1, &strs[counter], 1);
		counter++;
	}
}

void	write_char(char letter)
{
	write(1, &letter, 1);
}

void	write_nbr(int nb)
{
	if (nb == -2147483648)
	{
		write_char('-');
		write_char('2');
		write_nbr(147483648);
	}
	else if (nb < 0)
	{
		write_char('-');
		nb = -nb;
		write_nbr(nb);
	}
	else if (nb > 9)
	{
		write_nbr(nb / 10);
		write_nbr(nb % 10);
	}
	else
		write_char(nb + 48);
}

void	ft_show_tab(struct	s_stock_str *par)
{
	int	counter;

	counter = 0;
	while (par[counter].str != 0)
	{
		write_strs(par[counter].str);
		write_char('\n');
		write_nbr(par[counter].size);
		write_char('\n');
		write_strs(par[counter].copy);
		write_char('\n');
		counter++;
	}
}
