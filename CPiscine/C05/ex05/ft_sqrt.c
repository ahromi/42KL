/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:02:22 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/09 16:46:17 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;
	int	result;

	nb = 9;
	result = ft_sqrt(nb);
	printf("Square root of %d is %d\n", nb, result);
	return (0);
}
*/
int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	index = 2;
	if (nb >= 2)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			index++;
		}
	}
	return (0);
}
