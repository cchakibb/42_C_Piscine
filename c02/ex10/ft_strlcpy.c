/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbachir <cbachir@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:50:13 by cbachir           #+#    #+#             */
/*   Updated: 2021/04/27 12:54:41 by cbachir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size != '\0')
	{
		while (i < size - 1)
		{
			if (src[i] != '\0')
				dest[i] = src[i];
			else
				break ;
			i++;
		}
		while (i < size)
		{
			dest[i] = '\0';
			i++;
		}
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
