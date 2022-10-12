/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:06:42 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/28 16:24:13 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 'A' && str[counter] <= 'Z'))
			if (!(str[counter] >= 'a' && str[counter] <= 'z'))
				return (0);
		counter++;
	}
	return (1);
}
