/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:07:00 by akaniber          #+#    #+#             */
/*   Updated: 2022/08/01 12:07:58 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == to_find[k] && str[i + k] != '\0')
		{
			if (to_find[k + 1] == '\0')
				return (&str[i]);
			k++;
		}
		i++;
	}
	return (0);
}
