/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:41:53 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/14 14:15:43 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*ptr_s;
	unsigned char	cc;
	unsigned size_t	i;

	ptr_s = (unsigned char *) s;
	cc = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		if (ptr_s[i] == cc)
			return ((void *) &ptr_s[i]);
		i++;
	}
	return (NULL);
}
