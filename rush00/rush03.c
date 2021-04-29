/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbachir <cbachir@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:17:55 by cbachir           #+#    #+#             */
/*   Updated: 2021/04/18 16:19:40 by cbachir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
** UP LEFT & BOTTON LEFT "A"
** UP RIGHT & BOTTOM RIGHT "C"
** Horizontal & vertical "B"
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
			if ((h == 1 && v == 1) || (h == 1 && v == y))
				ft_putchar('A');
			else if ((h == x && v == y) || (h == x && v == 1))
				ft_putchar('C');
			else if ((h > 1 && h < x) && (v == 1 || v == y))
				ft_putchar('B');
			else if ((v > 1 && v < y) && (h == 1 || h == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			h++;
		}
		ft_putchar('\n');
		v++;
	}
}
