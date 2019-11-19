/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 21:02:57 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/19 15:31:02 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;

	i = 0;
	if (dstsize == 0)
	{
		return (0);
	}
	else
	{
		while (src[i] != '\0' && i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		i--;
		while (src[i] != '\0')
		{
			i++;
		}
	}
	return ((size_t)i);
}