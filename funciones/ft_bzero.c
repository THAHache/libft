/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:29:53 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/06 18:01:03 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			s[i] = 0;
			i++;
		}
	}
}
