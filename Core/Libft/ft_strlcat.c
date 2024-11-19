/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:38:06 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/19 12:58:56 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size_dst)
		return (size_dst + len_src);
	size_dst -= len_dst;
	if (len_src < size_dst)
	{
		ft_memcpy(dst + len_dst, src, len_src + 1);
	}
	else
	{
		ft_memcpy(dst + len_dst, src, len_src - 1);
		dst[len_dst + size_dst - 1] = '\0';
	}
	return (len_dst + len_src);
}
