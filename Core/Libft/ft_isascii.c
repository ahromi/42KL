/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:23:47 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/11 11:02:26 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);
	if (ft_isascii(c) == 0)
		printf("%c is not an ascii character.", c);
	else
		printf("%c is an ascii character.", c);
	return 0;
}
*/
