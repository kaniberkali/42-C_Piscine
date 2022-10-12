/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:23:11 by akaniber          #+#    #+#             */
/*   Updated: 2022/07/29 13:31:52 by akaniber         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*lower_case(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] -= 32;
		counter++;
	}
	return (str);
}

int	shortif(char letter)
{
	if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	lower_case(str);
	if (shortif(str[counter]) == 1)
	{
		str[counter] -= 32;
		counter++;
	}
	while (str[counter] != '\0')
	{
		if (shortif(str[counter]) == 0 && shortif(str[counter + 1]) == 1)
			if (!(str[counter] >= '0' && str[counter] <= '9'))
				str[counter + 1] -= 32;
		counter++;
	}
	return (str);
}
