/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbachir <cbachir@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:50:13 by cbachir           #+#    #+#             */
/*   Updated: 2021/04/21 13:43:38 by cbachir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		tab2[i] = tab[size - 1 - i];
		i++;
	}
	while (j < size)
	{
		tab[j] = tab2[j];
		j++;
	}
}
