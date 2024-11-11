/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:02:47 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/11 11:04:30 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	
	while(str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %i \n", ft_strlen(a));
    printf("Length of string b = %i \n", ft_strlen(b));

    return (0);
}
*/
