/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:17:02 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/27 10:31:57 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	q;
	int	tmp;

	i = 0;
	while (size > i)
	{
		q = i + 1;
		while (size > q)
		{
			if (tab[i] > tab[q])
			{
				tmp = tab[i];
				tab[i] = tab[q];
				tab[q] = tmp;
			}
			q++;
		}
		i++;
	}
}
