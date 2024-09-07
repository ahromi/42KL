/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:36:03 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/07 20:25:34 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = 5;
	printf("Factorial %d: %d\n", nb, ft_iterative_factorial(nb));
	return (0);
}*/
