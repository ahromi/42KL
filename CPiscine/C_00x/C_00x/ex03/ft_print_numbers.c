/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 00:30:04 by iahromi           #+#    #+#             */
/*   Updated: 2024/08/23 00:35:06 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		ft_putint(n);
		n++;
	}
}
