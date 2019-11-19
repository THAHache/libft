/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:36:09 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/06 18:02:42 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *aux;
	int i;

	i = 0;
	while (i < len)
	{
		aux[i] = dst[i];
		dst[i] = src[i];
		i++;
	}
	aux[i] = '\0';
	return aux;
}
