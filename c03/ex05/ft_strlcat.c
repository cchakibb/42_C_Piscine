/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbachir <cbachir@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:12:12 by cbachir           #+#    #+#             */
/*   Updated: 2021/04/27 21:12:48 by cbachir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	size = i + 1;
	while (dest[i] && src[j])
	{
		if (i < size)
			i++;
	}
	while (src[j] && i < size)
	{
		dest[i + j] = src[j];
		i++;
		j++;
	}
	size = i + j;
	return (size);
}
