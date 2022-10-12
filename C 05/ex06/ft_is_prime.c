/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:27:25 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/03 10:32:11 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = nb / 2;
	if (nb <= 1)
		return (0);
	while (counter > 1)
	{
		if ((nb % counter) == 0)
			return (0);
		counter--;
	}
	return (1);
}
