/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:32:20 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/08 03:38:33 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 1)
		result = nb * (ft_recursive_factorial(nb - 1));
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = 5;
	printf("Factorial %d is: %d\n", nb, ft_recursive_factorial(nb));
	return (0);
}*/
