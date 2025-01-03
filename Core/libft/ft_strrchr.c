/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:36:06 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/16 14:08:15 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	cc;
	char	*result;

	i = 0;
	cc = (char) c;
	result = NULL;
	while (str[i])
	{
		if (str[i] == cc)
			result = (char *) &str[i];
		i++;
	}
	if (str[i] == c)
		result = (char *) &str[i];
	return (result);
}
