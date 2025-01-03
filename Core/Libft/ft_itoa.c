/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:04:20 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/16 14:44:06 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len += 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return ((unsigned int)(-n));
	return ((unsigned int)n);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	int				len;
	char			*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = ft_abs(n);
	len = ft_number_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	if (number == 0)
		str[0] = '0';
	while (number != 0)
	{
		str[--len] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}
