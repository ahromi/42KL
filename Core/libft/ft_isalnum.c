/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:48 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/14 14:00:17 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
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
	if (ft_isalnum(c) == 0)
		printf("%c is not an alphabet nor a digit.", c);
	else
		printf("%c is an alphabet or digit.", c);
	return 0;
}
*/
