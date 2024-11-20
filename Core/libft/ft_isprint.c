/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:24:06 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/11 11:02:53 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	if (ft_isprint(c) == 0)
		printf("%c is not printable character.", c);
	else
		printf("%c is printable character.", c);
	return 0;
}
*/
