/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:54:49 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/08 18:08:24 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	*ft_memset(void *x, int y, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) x;
	while (len > 0)
	{
		*(tmp++) = (unsigned char) y;
		len--;
	}
	return (x);
}

#include <stdio.h>

int	main(void)
{
	char	str[50] = "Learn C programming in 42 is soooo fun!";
	printf("\nBefore ft_memset(): %s\n", str);
	ft_memset(str + 8, 'x', 11*sizeof(char));
	printf("\nAfter ft_memset(): %s\n", str);

	return (0);
}
