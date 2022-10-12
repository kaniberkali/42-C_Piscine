/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:15:40 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/26 13:14:46 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	reverse_array(int *tab, int size, int reverse_id)
{
	int	tmp;

	size--;
	tmp = tab[size];
	while (size > reverse_id)
	{
		tab[size] = tab[size - 1];
		size--;
	}
	tab[reverse_id] = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;

	counter = 0;
	while (counter < size)
	{
		reverse_array(tab, size, counter);
		counter++;
	}
}
