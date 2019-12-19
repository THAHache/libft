/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:38:45 by jperez-r          #+#    #+#             */
/*   Updated: 2019/12/17 03:43:13 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*dst;

	i = 0;
	if (!(dst = (void *)malloc(size * count)))
		return (NULL);
	ft_memset(dst, 0, size * count);
	return (dst);
}
