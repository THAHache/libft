/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:17:09 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/14 18:35:21 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	//unsigned char a;
	unsigned int i;

	//a = (char) c;
	i = 0;
	while (i < len)
	{
		b[i] = (void) c;
		i++;
	}
	return b;
}
