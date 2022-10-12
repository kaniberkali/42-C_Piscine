/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:35:32 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/24 12:43:19 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rama;
	int	ramb;

	rama = *a / *b;
	ramb = *a % *b;
	*a = rama;
	*b = ramb;
}
