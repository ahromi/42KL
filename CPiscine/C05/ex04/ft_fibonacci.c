/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:45:05 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/09 16:00:15 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;

	index = 9;
	for (int i = 0; i < index; i++)
	{
		printf("%d", ft_fibonacci(i));
		if (i != (index - 1))
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
*/
int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
