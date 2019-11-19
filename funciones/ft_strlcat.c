/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:31:21 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/19 15:52:01 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (dstsize == 0)
	{
		return (0);
	}
	while (dst[j] != '\0')
	{
		j++;
	}
	while (i < dstsize && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
	}
	dst[j] = '\0';
	i--;
	while (src[i] != '\0')
	{
		i++;
	}
	return ((size_t) i);
}