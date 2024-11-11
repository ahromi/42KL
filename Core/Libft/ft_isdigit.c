/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:25 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/11 11:01:25 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	if (ft_isdigit(c) == 0)
		printf("%c is not a digit.", c);
	else
		printf("%c is a digit.", c);
	return 0;
}
*/
