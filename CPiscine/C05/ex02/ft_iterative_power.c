/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:41:53 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/08 04:09:21 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	while (++i < power)
		result *= nb;
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 100;
	power = 0;
	result = ft_iterative_power(nb, power);
	printf("%d ^ %d is: %d\n", nb, power, result);
	return (0);
}*/
