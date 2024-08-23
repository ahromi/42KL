/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 02:30:44 by iahromi           #+#    #+#             */
/*   Updated: 2024/08/24 02:30:44 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    rush00(int x, int y)
{
    int row;
    int column;
    char    newline;

    newline = '\n';
    column = 1;
    while (column < y)
    {
        row = 1;
        while (row < x)
        {
            if ((column == 1 || y - 1) && (row == 1 || row == x - 1)) // corner
            {
                ft_putchar('o');
            }
            else if (column == 1 || y - 1) // Top & bottom borders
            {
                ft_putchar('-');
            }
            else if (row == 1 || row == x - 1) //Left & right borders
            {
                ft_putchar('|');
            }
            else
            {
                ft_putchar(' '); // Inside rectangle
            }
            row++;
        }
        ft_putchar(newline);
        column++;
    }
}