/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:40:45 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/09 18:57:28 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("The next prime number %d is: %d\n", 5, ft_find_next_prime(5));
	printf("The next prime number %d is: %d\n", 29, ft_find_next_prime(29));
	printf("The next prime number %d is: %d\n", 43, ft_find_next_prime(43));
	printf("The next prime number %d is: %d\n", 71, ft_find_next_prime(71));
	printf("The next prime number %d is: %d\n", 97, ft_find_next_prime(97));
	return (0);
}
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int     ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
