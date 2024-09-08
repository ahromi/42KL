/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:36:31 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/08 21:55:28 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 2;
	power = 1;
	result = ft_recursive_power(nb, power);
	printf("%d ^ %d is: %d\n", nb, power, result);
	return (0);
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 || (nb == 0 && power == 0))
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
