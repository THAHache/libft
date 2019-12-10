/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:38:45 by jperez-r          #+#    #+#             */
/*   Updated: 2019/12/10 19:44:11 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int 	i;
	void	*dst;

	i = 0;

	while (i < count)
	{
		if(!(dst[i] = malloc(sizeof(void) * size + 1)))
			return (NULL);
	}
	return (dst);
}