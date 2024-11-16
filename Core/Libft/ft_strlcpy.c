/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:02:10 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/16 14:06:48 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dst)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (len_src + 1 < size_dst)
	{
		ft_memcpy(dst, src, len_src +1);
	}
	else if (size_dst != 0)
	{
		ft_memcpy(dst, src, size_dst - 1);
		dst[size_dst - 1] = 0;
	}
	return (len_src);
}
