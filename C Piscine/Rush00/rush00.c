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
    y = 1;
    while (y < column)
    {
        while (x < row)
        {
            if ((y == 1 || column -1) && (x == 1 || x == row - 1)) // corner
            {
                ft_putchar('o');
            }
            else if (y == 1 || column -1) // Top & bottom borders
            {
                ft_putchar('-');
            }
            else if (x == 1 || x == row - 1) //Left & right borders
            {
                ft_putchar('|');
            }
            else
            {
                ft_putchar(' '); // Inside rectangle
            }
            x++;
        }
        ft_putchar(newline);
        y++;
    }
}