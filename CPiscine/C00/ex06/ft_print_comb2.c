/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 23:05:41 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/18 23:33:56 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			write(1, " ", 1);
			ft_putchar((y / 10) + '0');
			ft_putchar((y % 10) + '0');
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
