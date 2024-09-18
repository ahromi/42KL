/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:28:51 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/18 23:00:59 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x >= '0' && x <= '7')
	{
		y = x + 1;
		while (y >= '1' && y <= '8')
		{
			z = y + 1;
			while (z >= '2' && z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7')
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
