/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:16:18 by iahromi           #+#    #+#             */
/*   Updated: 2024/09/19 00:48:08 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	x;

	x = '0';
	if (n == 1)
	{
		while (x <= (10 - n) + '0')
		{
			ft_putchar(x);
			if (x != (10 - n) + '0')
				write(1, ", ", 2);
			x++;
		}
	}
	else if (n > 1)
	{
		while (x <= (10 - n) + '0')
		{
			ft_putchar(x);
			if (x != (10 - n) + '0')
				write(1, ", ", 2);
			x++;
		}
		ft_print_combn(n - 1);
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
