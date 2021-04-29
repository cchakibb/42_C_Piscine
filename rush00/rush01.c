/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbachir <cbachir@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:17:55 by cbachir           #+#    #+#             */
/*   Updated: 2021/04/19 09:19:28 by cbachir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** UP LEFT & BOTTOM RIGHT "/"
** UP RIGHT & BOTTOM LEFT "\"
** Horizontal "*"
** Vertical "*"
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
				ft_putchar('/');
			else if ((h == x && v == 1) || (h == 1 && v == y))
				ft_putchar('\\');
			else if ((h > 1 && h < x) && (v == 1 || v == y))
				ft_putchar('*');
			else if ((v > 1 && v < y) && (h == 1 || h == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
