/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 21:31:40 by iahromi           #+#    #+#             */
/*   Updated: 2024/10/10 22:07:20 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;
	printf("Original numbers:\na= %d\nb= %d\n", a, b);
	ft_swap(&a, &b);
	printf("After swap:\na= %d\nb= %d\n", a, b);
	return (0);
}
