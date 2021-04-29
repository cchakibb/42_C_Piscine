/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbachir <cbachir@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 09:57:17 by cbachir           #+#    #+#             */
/*   Updated: 2021/04/18 16:16:38 by cbachir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** UP LEFT & BOTTOM RIGHT "o"
** UP RIGHT & BOTTOM LEFT "o"
** Horizontal "-"
** Vertical "|"
*/

void	rush(int x, int y)
{
	int h;
	int v;

	v = 1;
	while (v <= y)
	{
		h = 1;
		while (h <= x)
		{
			if ((h == 1 && v == 1) || (h == x && v == y))
				ft_putchar('o');
			else if ((h == x && v == 1) || (h == 1 && v == y))
				ft_putchar('o');
			else if ((h > 1 && h < x) && (v == 1 || v == y))
				ft_putchar('-');
			else if ((v > 1 && v < y) && (h == 1 || h == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
